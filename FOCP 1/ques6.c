#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        ++i;
    }
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int rem, i = 1;
    while (decimal != 0) {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    long long binary;
    int decimal;

    printf("Number System Conversion Program\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}