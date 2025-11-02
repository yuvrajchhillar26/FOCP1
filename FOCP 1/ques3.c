#include <stdio.h>

int main() {
    int a, b, borrow;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    printf("Result after subtraction (a - b): %d\n", a);
    printf("This logic works like low-level processors or embedded systems where bitwise operations perform arithmetic without using + or - operators.\n");

    return 0;
}