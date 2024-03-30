#ifndef ITOA_H
#define ITOA_H

/**
 * @brief Converts an integer value to a null-terminated string using the specified base.
 *
 * This function converts the given integer value `val` to a string representation in the specified `base`.
 * The resulting string is stored in the character array `str`, which must have enough space to hold the converted value.
 * The converted string is null-terminated.
 *
 * @param val The integer value to be converted.
 * @param str The character array to store the converted string.
 * @param base The base to be used for the conversion (between 2 and 36).
 */
void itoa(int val, char* str, int base);

#endif // ITOA_H
#ifndef ITOA_H
#define ITOA_H

void itoa (int val, char* str, int base);

#endif // ITOA_H