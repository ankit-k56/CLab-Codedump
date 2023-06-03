#include <stdio.h>

int main(){
int r,c;
    printf("Enter the no of rows: ");
    scanf("%d",&r);

    printf("Enter the no. of columns: ");
    scanf("%d",&c);


    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter the element arr[%d][%d]: ", i,j);
            scanf("%d",&arr[i][j]);
            }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nLower triangular matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (j >i ) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}