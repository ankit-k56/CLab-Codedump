#include<stdio.h>
int main(){
    int m,n, crsum1,crsum2;
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
    crsum1 = arr[0][0]+arr[m-1][m-1];
    crsum2 = arr[m-1][0]+arr[0][m-1];
    printf("The sum of croner elements of two diagonal lement of the array is : %d and %d", crsum1, crsum2);

    
}