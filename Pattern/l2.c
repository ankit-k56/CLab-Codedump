#include <stdio.h>
int main(){
  int  num=0,n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i=1;i<=n;i++){
    for(int j=i;j<n;j++){
      printf (" ");
    }
    for(int j=1;j<=i;j++){
      printf ("%d",++num);
    }
    num--;
    for(int j=1;j<i;j++){
      printf ("%d",num--);
    }
    printf ("\n");
    num++;
  }
}