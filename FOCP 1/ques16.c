  #include <stdio.h>

int main() {
    int arr[100], n, pos, val, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0 for front, %d for end): ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // move elements right
    }

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}