#include <stdio.h>
void concsSum(int *num,int n){
    for(int i=n;i>0;i--){
        *(num+i)=*(num+i)+*(num+i-1);
    }   
}

int main() {
    int n, i, arr[100], *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    concsSum(arr,n);

    printf("Same updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}