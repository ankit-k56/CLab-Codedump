#include<stdio.h>
int main(){
    int m, centre;
    printf("Enter the number of rows and colums of a sqaure matrix: ");
    scanf("%d", &m);
    int arr[m][m] ;
    for(int i =0; i<m; i++){
        for(int j=0; j<m; j++){
            printf("Enter the value of arr[%d][%d] :",i,j);
            scanf("%d", &arr[i][j]);

        }
    }
    for(int i =0; i<m; i++){
        for(int j=0; j<m; j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    centre = ((m+1)/2);
    printf("The centre element of the array is: %d", arr[centre][centre]);

    
}