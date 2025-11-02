#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%lld", first);
        if (i < n)
            printf(", ");
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}