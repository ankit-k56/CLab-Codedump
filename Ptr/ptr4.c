#include <stdio.h>

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(int);
    int *ptr = arr;
    int count=0;
    // if()

    printf("Even numbers in the array: ");

    for(int i = 0; i < n; i++) {
        if((*ptr) % 2 == 0) {
            count++;
        }
        ptr++;
    }

    return 0;
}