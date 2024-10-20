#pragma once
// stdext.c
// containing standard library definition fixups for the CELL.
// aldo.
#include <src\system.hpp>
#define ___STD_FIX___ false
#ifdef __STD_FIX__
extern int stdc_E1E83C65(const char* str1, const char* str2, size_t num);  // strncmp()
extern int stdc_3D85D6F8(const char* str1, const char* str2);               // strcmp()
extern size_t stdc_2F45D39C(const char* str);                               // strlen()
extern void* stdc_5909E3C4(void* str, int c, size_t n);                     // memset()
extern void* stdc_831D70A5(void* dest, const void* src, size_t num);        // memcpy()
extern char* stdc_C5C09834(const char* str1, const char* str2);             // strstr()
extern int* stdc_44115DD0(void);                                            // _Geterrno
extern void allocator_77A602DD(void* ptr);                                  // free()
extern void* allocator_759E0635(size_t size);                               // malloc()
extern void* allocator_6137D196(size_t alignment, size_t size);             // memalign()
extern void* allocator_A72A7595(size_t nitems, size_t size);                // calloc()
extern void* allocator_F7A14A22(void* ptr, size_t size);                    // realloc()
extern void* stdc_5B162B7F(void* str1, const void* str2, size_t n);         // memmove()
extern char* stdc_FC0428A6(const char* s);                                  // strdup()
extern char* stdc_44796E5C(int errnum);                                     // strerror()
extern double stdc_519EBB77(double x);                                      // floor()
extern double stdc_21E6D304(double x);                                      // ceil()
extern time_t stdc_89F6F026(time_t* timer);                                 // time()
extern size_t stdc_FCAC2E8E(wchar_t* dest, const char* src, size_t max);    // mbstowcs()
extern int stdc_C3E14CBE(const void* ptr1, const void* ptr2, size_t num);   // memcmp()
extern char* stdc_DEBEE2AF(const char* str, int c);                         // strchr()
extern char* stdc_73EAE03D(const char* s, int c);                           // strrchr()
extern char* stdc_04A183FC(char* dest, const char* src);                    // strcpy()
extern char* stdc_8AB0ABC6(char* dest, const char* src, size_t num);        // strncpy()
extern char* stdc_AA9635D7(char* dest, const char* src);                    // strcat()
extern int stdc_B6257E3D(const char* s1, const char* s2, size_t n);         // strncasecmp()
extern int stdc_B6D92AC3(const char* s1, const char* s2);                   // strcasecmp()
inline char* strerror(int errnum) { return stdc_44796E5C(errnum); }

/**
 * @brief Compares two strings up to a given number of characters.
 * @param str1 First string to compare.
 * @param str2 Second string to compare.
 * @param num Maximum number of characters to compare.
 * @return -1 if either string is NULL, otherwise the comparison result.
 */
int strncmp(const char* str1, const char* str2, size_t num);

/**
 * @brief Compares two strings.
 * @param str1 First string to compare.
 * @param str2 Second string to compare.
 * @return -1 if either string is NULL, otherwise the comparison result.
 */
int strcmp(const char* str1, const char* str2);

/**
 * @brief Returns the length of a string.
 * @param str The string to measure.
 * @return 0 if the string is NULL, otherwise its length.
 */
size_t strlen(const char* str);

/**
 * @brief Fills a block of memory with a specified value.
 * @param str Pointer to the memory block to fill.
 * @param c Value to be set.
 * @param n Number of bytes to be set.
 * @return The pointer to the memory block.
 */
void* memset(void* str, int c, size_t n);

/**
 * @brief Copies a block of memory from one location to another.
 * @param dest Destination where the memory is copied.
 * @param src Source from where the memory is copied.
 * @param num Number of bytes to copy.
 * @return The destination pointer.
 */
void* memcpy(void* dest, const void* src, size_t num);

/**
 * @brief Finds the first occurrence of a substring in a string.
 * @param str1 The string to search in.
 * @param str2 The substring to search for.
 * @return A pointer to the beginning of the found substring, or NULL if not found.
 */
char* strstr(const char* str1, const char* str2);

/**
 * @brief Retrieves the current error number.
 * @return A pointer to the error number.
 */
inline int* _Geterrno(void);

/**
 * @brief Frees a previously allocated block of memory.
 * @param ptr Pointer to the memory block to free.
 */
void free(void* ptr);

/**
 * @brief Allocates a block of memory of the given size.
 * @param size Size of the memory block in bytes.
 * @return A pointer to the allocated memory block, or NULL if size is 0.
 */
void* malloc(size_t size);

/**
 * @brief Allocates a memory block with specific alignment.
 * @param alignment Alignment of the memory block.
 * @param size Size of the memory block in bytes.
 * @return A pointer to the aligned memory block.
 */
inline void* memalign(size_t alignment, size_t size);

/**
 * @brief Allocates memory for an array and initializes it to zero.
 * @param nitems Number of elements.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated memory.
 */
inline void* calloc(size_t nitems, size_t size);

/**
 * @brief Reallocates a previously allocated memory block to a new size.
 * @param ptr Pointer to the previously allocated memory block.
 * @param size New size for the memory block in bytes.
 * @return A pointer to the newly allocated memory.
 */
inline void* realloc(void* ptr, size_t size);

/**
 * @brief Moves a block of memory to a new location.
 * @param str1 Destination where the memory will be moved.
 * @param str2 Source from where the memory is moved.
 * @param n Number of bytes to move.
 * @return The destination pointer.
 */
void* memmove(void* str1, const void* str2, size_t n);

/**
 * @brief Duplicates a string by allocating new memory.
 * @param s The string to duplicate.
 * @return A pointer to the duplicated string, or NULL if the input is NULL.
 */
char* strdup(const char* s);

/**
 * @brief Rounds a floating-point number down to the nearest integer.
 * @param x The number to round down.
 * @return The rounded value.
 */
inline double floor(double x);

/**
 * @brief Rounds a floating-point number up to the nearest integer.
 * @param x The number to round up.
 * @return The rounded value.
 */
inline double ceil(double x);

/**
 * @brief Returns the current time.
 * @param timer Pointer to store the current time.
 * @return The current time as a time_t value.
 */
inline time_t time(time_t* timer);

/**
 * @brief Converts a multibyte string to a wide character string.
 * @param dest The destination wide character string.
 * @param src The source multibyte string.
 * @param max Maximum number of wide characters to convert.
 * @return The number of characters converted.
 */
size_t mbstowcs(wchar_t* dest, const char* src, size_t max);

/**
 * @brief Converts a wide character to a multibyte character.
 * @param s The destination multibyte character.
 * @param wchar The wide character to convert.
 * @return The number of bytes written, or -1 if an error occurs.
 */
int wctomb(char* s, wchar_t wchar);

/**
 * @brief Compares two memory blocks.
 * @param ptr1 First memory block to compare.
 * @param ptr2 Second memory block to compare.
 * @param num Number of bytes to compare.
 * @return -1 if either pointer is NULL or if the blocks are different, otherwise 0.
 */
int memcmp(const void* ptr1, const void* ptr2, size_t num);

/**
 * @brief Finds the first occurrence of a character in a string.
 * @param str The string to search in.
 * @param c The character to search for.
 * @return A pointer to the found character, or NULL if not found.
 */
char* strchr(const char* str, int c);

/**
 * @brief Finds the last occurrence of a character in a string.
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the found character, or NULL if not found.
 */
char* strrchr(const char* s, int c);

/**
 * @brief Copies a string to another string.
 * @param dest Destination where the string is copied.
 * @param src Source string to copy from.
 * @return The destination string.
 */
char* strcpy(char* dest, const char* src);

/**
 * @brief Copies a specified number of characters from one string to another.
 * @param dest Destination where the characters are copied.
 * @param src Source string to copy from.
 * @param num Number of characters to copy.
 * @return The destination string.
 */
char* strncpy(char* dest, const char* src, size_t num);

/**
 * @brief Concatenates two strings.
 * @param dest Destination string to append to.
 * @param src Source string to append.
 * @return The destination string.
 */
char* strcat(char* dest, const char* src);

/**
 * @brief Case-insensitive comparison of two strings up to a specified number of characters.
 * @param s1 First string to compare.
 * @param s2 Second string to compare.
 * @param n Maximum number of characters to compare.
 * @return The comparison result, or -1 if either string is NULL.
 */
int strncasecmp(const char* s1, const char* s2, size_t n);

/**
 * @brief Case-insensitive comparison of two strings.
 * @param s1 First string to compare.
 * @param s2 Second string to compare.
 * @return The comparison result, or -1 if either string is NULL.
 */
int strcasecmp(const char* s1, const char* s2);

#endif