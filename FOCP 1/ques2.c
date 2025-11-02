#include <stdio.h>
#include <stdlib.h>

int gcd_recursive(int a, int b) {
    if (b == 0) return a;
    return gcd_recursive(b, a % b);
}

int gcd_iterative(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int x, y, choice;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    x = abs(x);
    y = abs(y);

    if (x == 0 && y == 0) {
        printf("HCF undefined for both zero\n");
        return 0;
    }

    printf("\nChoose method:\n");
    printf("1 - Iterative (Euclidean algorithm)\n");
    printf("2 - Recursive (Euclidean algorithm)\n");
    printf("3 - Show both methods\n");
    printf("Enter choice (1-3): ");
    if (scanf("%d", &choice) != 1) choice = 1;

    if (choice == 1 || choice == 3) {
        int a = x, b = y;
        if (a == 0) printf("\nIterative result: HCF(%d, %d) = %d\n", x, y, b);
        else if (b == 0) printf("\nIterative result: HCF(%d, %d) = %d\n", x, y, a);
        else {
            printf("\nIterative steps:\n");
            while (b != 0) {
                int t = a % b;
                printf("a = %d, b = %d -> a %% b = %d\n", a, b, t);
                a = b;
                b = t;
            }
            printf("Iterative result: HCF(%d, %d) = %d\n", x, y, a);
        }
    }

    if (choice == 2 || choice == 3) {
        int result;
        if (x == 0) result = y;
        else if (y == 0) result = x;
        else result = gcd_recursive(x, y);
        printf("\nRecursive result: HCF(%d, %d) = %d\n", x, y, result);
    }

    return 0;
}