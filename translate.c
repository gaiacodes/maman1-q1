/*
This program receives a decimal number as input, converts it into a binary number and prints it to stdout.
It assumes that the input is ascii codes for the digits 0-9.
It also assumes the input number can be represented as an unsigned int.
*/

#include <stdio.h>


#define MAX_DECIMAL_DIGITS 10
#define MAX_BINARY_DIGITS 32

/*  prints decimal number as binary */
void translate_dec(char decimal_str[]);


int main(void) {
    char decimal[MAX_DECIMAL_DIGITS + 1] = {0};
    printf("Enter a decimal number to convert to binary: ");
    scanf("%s", decimal);
    printf("Entered decimal number is: %s\n", decimal);
    translate_dec(decimal);
    return 0;
}

void translate_dec(char decimal_str[]) {
    /* the decimal number received as int*/
    unsigned int decimal_number;

    /* an array to keep the binary number*/
    char binary[MAX_BINARY_DIGITS + 1] = "00000000000000000000000000000000";
    int i = MAX_BINARY_DIGITS - 1;
    sscanf(decimal_str, "%u", &decimal_number);

    /* We divide the decimal number again and again while saving the remainder in the binary number in reverse.
    We stop when the number is zero.*/
    do {
        if (decimal_number % 2 == 1) {
            binary[i] = '1';
        }
        i--;
        decimal_number /= 2;
    } while (decimal_number > 0);

    /* We only print the part of the binary array that we went through in the loop.*/
    printf("Binary representation is: %s\n", binary + i + 1);
}
