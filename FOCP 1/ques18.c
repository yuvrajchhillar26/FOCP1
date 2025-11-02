  #include <stdio.h>
   int main() {
    int arr[100], n, i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");
    for(i = 0; i < n; i++) {
        int count = 0;

        if(arr[i] == -1) 
            continue;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }
        }

        if(count > 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(found == 0)
        printf("-1");

    printf("\n");
    return 0;
}