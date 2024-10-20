#pragma once
#include <types.h>
#include <cell.h>
#include <cellstatus.h>
#include <sys\tty.h>
#include <sys\integertypes.h>
#include <sys\types.h>
#include <sys\sys_time.h>
#include <sys\time.h>
#include <sys\interrupt.h>
#include <sys\ppu_thread.h>
#include <sys\syscall.h>
#include <string>
#ifndef nullptr
#define nullptr 0
#endif

#define KB(x) ((x) * 1024)             
#define MB(x) ((x) * 1024 * 1024)      
#define GB(x) ((x) * 1024 * 1024 * 1024)
#define TB(x) ((x) * 1024 * 1024 * 1024 * 1024)

#define MAX(a, b)			((a) >= (b) ? (a) : (b))
#define MIN(a, b)			((a) <= (b) ? (a) : (b))
#define ABS(a)				(((a) < 0) ? -(a) : (a))
// aldo had the same idea 
#define RANGE(a, b, c)		((a) <= (b) ? (b) : (a) >= (c) ? (c) : (a))
#define BETWEEN(a, b, c)	( ((a) <= (b)) && ((b) <= (c)) )
#define ISDIGIT(a)			( ('0' <= (a)) && ((a) <= '9') )
#define ISSPACE(a)			( ( 0  <= (a)) && ((a) <= ' ') )
#define ISHEX(a)			(ISDIGIT(a) || BETWEEN('a', LCASE(a), 'f'))
#define	INT32(a)			(*((u32*)(a)))
#define LCASE(a)	(a | 0x20)
#define NORMALIZED(x, min, max)(x - min) / (max - min)
#define NORMALIZED2(x) (((x)<0.0) ? 0.0:1.0 )
#define NORMALIZE32(x) (((x)<-1.0) ? -1.0: (((x) > 1.0)?1.0:x) )
#define ast(type,x)\ ((type)(x))
#define NAMEOF(var) #var
#define AS(addr, type) (type)addr;
#define OVERRIDE_INMEDIATE(liAddr, newValue) (((short*)liAddr)[1] = newValue);
#define RAND_BY_TIME(uint_time) _sys_bitwise_mix(uint_time);
#define __UNKNOWN_DATA private:
#define TRUNC_DECIMALS(x) (floorf(x * 100) / 100.0)
#define HIWORD(l) ((unsigned short)(((unsigned long)(l) >> 16) & 0xFFFF))
#define LOWORD(l) ((unsigned short)((unsigned long)(l) & 0xFFFF))
#define THIS (uintptr_t)(this)
#define does(x) { x; }
#define dummyclass class
typedef sys_ppu_thread_t thread;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef uint32_t* uintaddr;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef short _WORD;
typedef unsigned char _BYTE;
typedef uint address;
typedef uint64_t any;
typedef uint32_t HResult;
typedef short* asm_li_t;
typedef unsigned long long any;


typedef struct opd_t {

	void* virtual_type_table;

	operator void* () {
		return virtual_type_table;
	}
};
double stod(const char* str) {
	double result = 0.0f;
	double factor = 1.0f;
	bool negative = false;
	bool decimalPointEncountered = false;
	float decimalFactor = 0.1f;

	// !! Ensure skipping leading spaces otherwises it will always return 0.0
	while (*str == ' ') {
		str++;
	}
	if (*str == '-') {
		negative = true;
		str++;
	}
	while (*str != '\0') {
		if (*str == '.') {
			decimalPointEncountered = true;
		}
		else if (*str >= '0' && *str <= '9') {
			if (decimalPointEncountered) {
				result += (*str - '0') * decimalFactor;
				decimalFactor *= 0.1f;
			}
			else {
				result = result * 10.0f + (*str - '0');
			}
		}
		else {
			break;
		}
		str++;
	}
	if (negative) {
		result = -result;
	}

	return result;
}
float stof(const char* str) {
	float result = 0.0f;
	float factor = 1.0f;
	bool negative = false;
	bool decimalPointEncountered = false;
	float decimalFactor = 0.1f;
	// !! Ensure skipping leading spaces otherwises it will always return 0.0
	while (*str == ' ') {
		str++;
	}
	if (*str == '-') {
		negative = true;
		str++;
	}
	while (*str != '\0') {
		if (*str == '.') {
			decimalPointEncountered = true;
		}
		else if (*str >= '0' && *str <= '9') {
			if (decimalPointEncountered) {
				result += (*str - '0') * decimalFactor;
				decimalFactor *= 0.1f;
			}
			else {
				result = result * 10.0f + (*str - '0');
			}
		}
		else {
			break;
		}
		str++;
	}
	if (negative) {
		result = -result;
	}

	return result;
}

template <typename ...args>
size_t strnprintfcat(char* buffer, const char* frm, size_t capacity, args...s) {
	char buffer2[1024];
	sys::memset(buffer2, 0, 1024);
	sys::snprintf(buffer2, capacity, frm, s...);
	size_t r = sys::strlen(buffer2);
	buffer2[r] = '\0';
	sys::_sys_strncat(buffer, buffer2, r);
	return r;

}


void __nopadr(void* a) {
	*(int*)a = 0x60000000;
}
void __nopadr(uintptr_t a) does(__nopadr((void*) a));

int atoi(const char* str) {
	int result = 0;
	int sign = 1;
	int i = 0;
	while (str[i] == ' ')
		i++;

	if (str[i] == '-') {
		sign = -1;
		i++;
	}
	else if (str[i] == '+') {
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return sign * result;
}
bool is_char_letter(char c){
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return true;
	return false;
}
int indexOf(const char* str, char target) {
	if (str == 0) {
		return -1; 
	}

	const char* tempStr = str; 
	int index = 0;

	while (*tempStr != '\0') {
		if (*tempStr == target) {
			return index; 
		}

		++tempStr;
		++index;
	}

	return -1;  
}


static void wcharToUtf8(wchar_t wchar, char* utf8Buffer, size_t bufferSize, size_t& written) {
	if (wchar <= 0x7F) {
		if (written + 1 < bufferSize) {
			utf8Buffer[written++] = static_cast<char>(wchar);
		}
	}
	else if (wchar <= 0x7FF) {
		if (written + 2 < bufferSize) {
			utf8Buffer[written++] = static_cast<char>(0xC0 | (wchar >> 6));
			utf8Buffer[written++] = static_cast<char>(0x80 | (wchar & 0x3F));
		}
	}
	else if (wchar <= 0xFFFF) {
		if (written + 3 < bufferSize) {
			utf8Buffer[written++] = static_cast<char>(0xE0 | (wchar >> 12));
			utf8Buffer[written++] = static_cast<char>(0x80 | ((wchar >> 6) & 0x3F));
			utf8Buffer[written++] = static_cast<char>(0x80 | (wchar & 0x3F));
		}
	}
}
static void wcharStringToUtf8(const wchar_t* wcharString, char* utf8Buffer, size_t bufferSize) {
	size_t written = 0;
	for (const wchar_t* wchar = wcharString; *wchar != L'\0'; ++wchar) {
		wcharToUtf8(*wchar, utf8Buffer, bufferSize, written);
	}
	if (written < bufferSize) {
		utf8Buffer[written] = '\0';
	}
}
static wchar_t utf8ToWchar(char* utf8Char, size_t& bytesRead) {
	unsigned char* uchar = reinterpret_cast<unsigned char*>(utf8Char);
	wchar_t wchar = 0;

	int bytesToRead = 1;
	if ((*uchar & 0xF8) == 0xF0) {
		bytesToRead = 4;
		wchar = *uchar & 0x07;
	}
	else if ((*uchar & 0xF0) == 0xE0) {
		bytesToRead = 3;
		wchar = *uchar & 0x0F;
	}
	else if ((*uchar & 0xE0) == 0xC0) {
		bytesToRead = 2;
		wchar = *uchar & 0x1F;
	}
	else {
		wchar = *uchar;
	}

	for (int i = 1; i < bytesToRead; ++i) {
		wchar = (wchar << 6) | (uchar[i] & 0x3F);
	}

	bytesRead = bytesToRead;

	return wchar;
}
static void utf8ToWcharString(char* utf8String, wchar_t* wcharBuffer, size_t wcharBufferSize) {
	size_t bytesRead = 0;
	size_t wcharIndex = 0;

	while (*utf8String != '\0') {
		wchar_t wchar = utf8ToWchar(utf8String, bytesRead);
		if (wcharIndex < wcharBufferSize - 1) {
			wcharBuffer[wcharIndex++] = wchar;
		}
		utf8String += bytesRead;
	}

	wcharBuffer[wcharIndex] = L'\0';
}

template <std::size_t size, typename Array>
uint explicitArraySize(Array(&array)[size]) {
	return size;
}


template <std::size_t size, typename Array>
const uint explicitArraySize2(Array(&array)[size]) {
	return size;
}

uint64_t __random_seed__;
int random() {
	uint64_t a = 1664525343;
	uint64_t c = 1013904223;
	__random_seed__ = a * __random_seed__ + c;
	return static_cast<int>(__random_seed__ % (RAND_MAX + 1));
}


int32_t sys_dbg_read_process_memory(uint64_t address, void* data, size_t size)
{
	system_call_4(904, (uint64_t)sys_process_getpid(), address, size, (uint64_t)data);
	return_to_user_prog(int32_t);
}
int32_t sys_dbg_write_process_memory(uint64_t address, const void* data, size_t size)
{
	system_call_4(905, (uint64_t)sys_process_getpid(), address, size, (uint64_t)data);
	return_to_user_prog(int32_t);
}
int32_t sys_dbg_write_process_memory_ps3mapi(uint64_t ea, const void* data, size_t size)
{
	system_call_6(8, 0x7777, 0x32, (uint64_t)sys_process_getpid(), (uint64_t)ea, (uint64_t)data, (uint64_t)size);
	return_to_user_prog(int32_t);
}
int32_t sys_dbg_read_process_memory_ps3mapi(uint64_t ea, void* data, size_t size)
{
	system_call_6(8, 0x7777, 0x31, (uint64_t)sys_process_getpid(), (uint64_t)ea, (uint64_t)data, (uint64_t)size);
	return_to_user_prog(int32_t);
}
