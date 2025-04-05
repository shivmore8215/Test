/*
 * The function determines whether an input integer is even or odd using various approaches including
   modulus operator, bitwise operators, division, conditional operator, subtraction, and stringrepresentation.
  
 * @return The program returns 0, which indicates successful execution and termination of the program.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// The Fetch not used
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Approach 1: Using modulus operator
    if (number % 2 == 0) {
        printf("Approach 1: %d is even.\n", number);
    } else {
        printf("Approach 1: %d is odd.\n", number);
    }

    // Approach 2: Using bitwise AND operator
    if ((number & 1) == 0) {
        printf("Approach 2: %d is even.\n", number);
    } else {
        printf("Approach 2: %d is odd.\n", number);
    }
    
    // Approach 3: Using division and multiplication
    if ((number / 2) * 2 == number) {
        printf("Approach 3: %d is even.\n", number);
    } else {
        printf("Approach 3: %d is odd.\n", number);
    }

    // Approach 4: Using conditional operator
    (number % 2 == 0) ? printf("Approach 4: %d is even.\n", number) : printf("Approach 4: %d is odd.\n", number);

    // Approach 5: Using subtraction
    if (number - (number / 2) * 2 == 0) {
        printf("Approach 5: %d is even.\n", number);
    } else {
        printf("Approach 5: %d is odd.\n", number);
    }

    // Approach 6: Using string representation
    if (strchr("02468", '0' + abs(number % 10)) != NULL) {
        printf("Approach 6: %d is even.\n", number);
    } else {
        printf("Approach 6: %d is odd.\n", number);
    }
    return 0;
}
