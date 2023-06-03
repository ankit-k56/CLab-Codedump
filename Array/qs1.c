#include<stdio.h>
int main()
{
    int i,avg,count=0,sum=0,marks[20];
    printf("%d\n", sizeof(marks)/sizeof(marks[1]));
    for(i=0;i<20;i++){
      printf("Enter the marks:");
      scanf("%d",&marks[i]);
    }
    for(i=0;i<20;i++){
        sum+=marks[i];
        if(marks[i]>=90){ 
            count++;
        }
        avg=sum/20;
    }
    printf("The average marks is %d\n",avg);
    printf("The number of students who scored more than 90 are :%d",count);
    return 0;
}