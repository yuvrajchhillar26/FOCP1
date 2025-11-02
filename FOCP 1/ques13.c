#include <stdio.h>

int main() {

    int arr[100];
    int n;
    int i;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (n == 1) {
        printf("Peak element is %d at index 0\n", arr[0]);
        return 0;
    }

    
    if (arr[0] >= arr[1]) {
        printf("Peak element is %d at index 0\n", arr[0]);
        return 0;
    }

   
    for (i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d at index %d\n", arr[i], i);
            return 0;
        }
    }

    
    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is %d at index %d\n", arr[n - 1], n - 1);
        return 0;
    }

    
    printf("No peak element found.\n");

    return 0;
}