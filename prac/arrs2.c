#include <stdio.h>

int findSecondSmallest(int array[], int size) {
    int smallest = array[0];
    int secondSmallest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        } else if (array[i] < secondSmallest && array[i] != smallest) {
            secondSmallest = array[i];
        }
    }

    return secondSmallest;
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

    int secondSmallest = findSecondSmallest(array, size);

    printf("The second smallest number in the array is: %d\n", secondSmallest);

    return 0;
}
