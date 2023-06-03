#include<stdio.h>
int main(){
    // int arr[100], size;
    // printf("Enter the ")
    int arr[8] ={1,1,2,3,4,5,5,6};
    int size = sizeof(arr)/sizeof(int);
    printf("%d", size);
    for(int i  =0; i<size; i++){
        for(int j=i+1;j<size;){
            if(arr[i]==arr[j]){
                for (int m =j;m<size;m++){
                    arr[m] = arr[m+1];
                }
                size --;
            } else{
                j++;
            }
        }
    }
    
    printf("The Array after removing duplicate elements is: ");
    for(int i =0; i<size;i++){
        printf(" %d ", arr[i] );
    }
    return 0;
} 