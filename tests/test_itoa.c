#include "test_itoa.h"

int test_itoa() {
  char buffer[100];

  // Test case 1: Convert decimal number to base 10
  int number1 = 12345;
  buffer[0] = '\0'; // Clear buffer
  itoa(number1, buffer, 10);
  buffer[strlen(buffer)] = '\0'; // Manually set null terminator
  print("Test case 1: ", strlen("Test case 1: "));
  print(buffer, strlen(buffer));
  print("\n", 1); // Expected output: "12345"

  // Test case 2: Convert decimal number to base 2
  int number2 = 42;
  buffer[0] = '\0'; // Clear buffer
  itoa(number2, buffer, 2);
  buffer[strlen(buffer)] = '\0'; // Manually set null terminator
  print("Test case 2: ", strlen("Test case 2: "));
  print(buffer, strlen(buffer));
  print("\n", 1); // Expected output: "101010"

  // Test case 3: Convert decimal number to base 16
  int number3 = 255;
  buffer[0] = '\0'; // Clear buffer
  itoa(number3, buffer, 16);
  buffer[strlen(buffer)] = '\0'; // Manually set null terminator
  print("Test case 3: ", strlen("Test case 3: "));
  print(buffer, strlen(buffer));
  print("\n", 1); // Expected output: "ff"

  // Test case 4: Convert decimal number to base 8
  int number4 = 123;
  buffer[0] = '\0'; // Clear buffer
  itoa(number4, buffer, 8);
  buffer[strlen(buffer)] = '\0'; // Manually set null terminator
  print("Test case 4: ", strlen("Test case 4: "));
  print(buffer, strlen(buffer));
  print("\n", 1); // Expected output: "173"

  // Test case 5: Convert decimal number to base 36
  int number5 = 123456;
  buffer[0] = '\0'; // Clear buffer
  itoa(number5, buffer, 36);
  buffer[strlen(buffer)] = '\0'; // Manually set null terminator
  print("Test case 5: ", strlen("Test case 5: "));
  print(buffer, strlen(buffer));
  print("\n", 1); // Expected output: "2n9c"

  return 0;
}