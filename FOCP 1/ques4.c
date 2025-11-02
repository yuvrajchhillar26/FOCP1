#include <stdio.h>

int main() {
    int a, b, choice, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose swap method:\n");
    printf("1. Using third variable\n");
    printf("2. Using + and -\n");
    printf("3. Using XOR\n");
    printf("4. Using pointers\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    if (choice == 1) {
        temp = a;
        a = b;
        b = temp;
    }
    else if (choice == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    else if (choice == 3) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    else if (choice == 4) {
        int *p1 = &a, *p2 = &b;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}