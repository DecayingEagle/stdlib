#ifndef PRINTF_H
#define PRINTF_H

#include "print.c"
#include "itoa.c"

/**
 * @brief Prints formatted output to stdout.
 *
 * This function formats and prints the specified arguments according to the format string.
 * The format string can contain placeholders that will be replaced by the corresponding arguments.
 * The placeholders are defined by the format specifiers, such as %d for integers or %s for strings.
 *
 * @param format The format string specifying the output format.
 * @param ... The additional arguments to be formatted and printed.
 *
 * @return The number of characters printed, or a negative value if an error occurred.
 */
int printf(const char* format, ...);

#endif // PRINTF_H