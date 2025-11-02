 #include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0 for front, %d for end): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // move left
    }

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}