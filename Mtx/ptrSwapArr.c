#include <stdio.h>

void swapNum(int *num1, int *num2) {
   *num1= *num1 + *num2;
   *num2 = *num1 - *num2;
   *num1 = *num1 - *num2;
}


int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int size = sizeof(arr)/sizeof(int);
   int *startEl = arr;
   int *lastEl = &arr[size-1];

   while (startEl < lastEl) {
      swapNum(startEl, lastEl);
      startEl++;
      lastEl--;
   }

   printf("Array after swapping is: ");
   for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   return 0;
}