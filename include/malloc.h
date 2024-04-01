#ifndef MALLOC_H
#define MALLOC_H

#include "types.h"

// Function declarations
/**
 * @brief Allocates a block of memory of the specified size.
 *
 * This function dynamically allocates a block of memory of the specified size
 * and returns a pointer to the beginning of the allocated block. The allocated
 * memory is uninitialized.
 *
 * @param size The size of the memory block to allocate, in bytes.
 * @return A pointer to the beginning of the allocated block, or NULL if the
 *         allocation fails.
 */
void* malloc(const size_t size);

#endif // MALLOC_H