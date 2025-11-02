#include <stdio.h>
int main() {

    int scores[100], even_array[100], odd_array[100];
    int n, i;
    int even_count = 0;
    int odd_count = 0;

    
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

   
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

   
    printf("\nEven scores (%d): ", even_count);
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd scores (%d): ", odd_count);
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}