#include <stdio.h>


#define MAX_DECIMAL_DIGITS 10
#define MAX_BINARY_DIGITS 32

// prints decimal number as binary
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
    unsigned int decimal_number;
    char binary[MAX_BINARY_DIGITS + 1] = "00000000000000000000000000000000";
    int i = MAX_BINARY_DIGITS - 1;
    sscanf(decimal_str, "%u", &decimal_number);
    do {
        if (decimal_number % 2 == 1) {
            binary[i] = '1';
        }
        i--;
        decimal_number /= 2;
    } while (decimal_number > 0);

    printf("Binary representation is: %s\n", binary + i + 1);
}
