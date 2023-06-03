#include<stdio.h>
void fibonacci(int* x)
{
    for(int i=4;i>0;i--)
    {
        *(x+i)=*(x+i)+*(x+i-1);
    }
    return;
}
int main()
{
    int a[5]={10,20,30,45,50};
    fibonacci(a);
    for(int i=0;i<5;i++)
    printf(" %d ",a[i]);
    return 0;
}