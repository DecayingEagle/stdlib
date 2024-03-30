/**
 * @file print.h
 * @brief Header file for the print function.
 *
 * This file contains the declaration of the print function, which is used to print a string.
 */

#include "types.h"

#ifndef PRINT_H
#define PRINT_H

/**
 * @brief Prints a string.
 *
 * This function takes a string and its length as input and prints it to the standard output.
 *
 * @param str The string to be printed.
 * @param len The length of the string.
 * @return The number of characters printed.
 */
int print(const char* str, size_t len);

#endif // PRINT_H