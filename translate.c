#include <stdio.h>



void translate_dec(char decimal[]);


int main(void) {
    char decimal[11] = {0};
    printf("Enter a decimal number to convert to binary: ");
    scanf("%s", decimal);
    printf("Entered decimal number is: %s\n", decimal);
    translate_dec(decimal);
    return 0;
}

void translate_dec(char decimal[]) {
    unsigned int number;
    char binary[33] = "00000000000000000000000000000000";
    int binary_number_index = 31;
    sscanf(decimal, "%u", &number);
    do {
        if (number % 2 == 1) {
            binary[binary_number_index] = '1';
        }
        binary_number_index--;
        number /= 2;
    } while (number > 0);

    printf("Binary representation is: %s\n", binary + binary_number_index + 1);
}
