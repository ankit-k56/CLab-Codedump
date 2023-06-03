#include<stdio.h>
struct book{
    char name[20];
    float price;
    int pages;
};
struct book b,k[5];


int main(){
    struct book b1,b2;
    printf("\nenter names,prices and no. of pages of 2 books\n");
    scanf("%s%f%d",&b1.name,&b1.price,&b1.pages);
    scanf("%s%f%d",&b2.name,&b2.price,&b2.pages);
    printf("the name of first book is %s , the price of first book is %f and pages are %d",b1.name,b1.price,b1.pages);
    printf("the name of second book is %s , the price of second book is %f and pages are %d",b2.name,b2.price,b2.pages);
    return 0;
}