#include <stdio.h>
#include <string.h>

struct Book {
    char name[20];
    float price;
    int pages;
};

int main() {
   
    struct Book books[3];
    struct Book* pBook = books;

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of book %d: ", i+1);
         scanf("%s", &pBook->name);

        printf("Enter the price of book %d: ", i+1);
        scanf("%f", &pBook->price);

        printf("Enter the number of pages in book %d: ", i+1);
        scanf("%d", &pBook->pages);

        getchar(); 

        pBook++; 
    }

    printf("\nBook details:\n");

    pBook = books; 

    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i+1);
        printf("Name: %s\n", pBook->name);
        printf("Price: %.2f\n", pBook->price);
        printf("Pages: %d\n", pBook->pages);

        pBook++; 
    }

    return 0;
}