#include<stdio.h>
struct book {
    char name[20];
    char author[20];
    int price;
};
void displayVal (struct book *ptr){
    printf("%d", ptr->price);


}
int mian(){
    struct book b1[3];
    b1[0].price = 20;
    displayVal(&b1);

    // printf("%d", b1);
    // for(int i =0; i<3; i++){
    //     printf("The value of name, author, price of %d object %d of struct b1:", i);
    //     scanf("%s%s%d", )
    // }
    
}