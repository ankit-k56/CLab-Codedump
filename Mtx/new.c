#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[0];

    for (i = 0; i < n - 1; i++) {
        *(ptr+1) += *(ptr + 2);
        ptr++;
    }

    n--;

    printf("The updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        arr[i] = arr[i+1];
    }

    return 0;
}
