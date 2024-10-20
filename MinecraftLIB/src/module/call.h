#pragma once
#include "toc.h"

/**
 * @brief Calls a function with the given arguments.
 *
 * This template function sets up a function call based on a provided function pointer and the TOC (Table of Contents)
 * and then invokes the function with the given arguments. The result is returned to the caller.
 *
 * @tparam R The return type of the function being called.
 * @tparam Arguments Variadic template for function arguments.
 *
 * @param function A long long integer representing the function pointer (address).
 * @param args The arguments to pass to the function.
 *
 * @return R The result of the function call.
 *
 * @note The `OPD` array holds both the function pointer and the TOC, and these are used to set up the call.
 */
template<typename R, typename... Arguments>
inline R Call(long long function, Arguments... args);

template <typename R, class Instance, typename ...Args>
R CallToInstance(uintptr_t address, Instance* thisInst, Args...s);
