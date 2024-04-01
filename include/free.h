#ifndef FREE_H
#define FREE_H

#include "types.h"

/**
 * @brief Frees the memory block pointed to by `ptr`.
 *
 * This function releases the memory block previously allocated by a call to `malloc`, `calloc`, or `realloc`.
 * The behavior is undefined if the `ptr` parameter does not match a pointer returned by a memory allocation function.
 *
 * @param ptr Pointer to the memory block to be freed.
 * @return 0 if the memory block is successfully freed, a non-zero value otherwise.
 */
int free(void* ptr);

#endif // FREE_H