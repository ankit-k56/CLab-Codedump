#include <stdio.h>

void reverseArr(int arr[]) {
    int s = 0,e = 10 - 1,temp;

    while (s < e) {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
}

int main() {
    int Arr[10] ;
    for(int i=0; i<10;i++){
        printf("Enter %dth element of Array: ", i+1);
        scanf("%d", &Arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", Arr[i]);
    }

    reverseArr(Arr);

    printf("\nReversed Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", Arr[i]);
    }

    return 0;
}
