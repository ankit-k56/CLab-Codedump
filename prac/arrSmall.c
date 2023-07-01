#include <stdio.h>

int findSmallest(int array[], int size) {
    int smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    return smallest;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = findSmallest(array, size);

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
