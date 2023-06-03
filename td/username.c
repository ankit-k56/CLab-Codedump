#include<stdio.h>
int main(){
    char username;
    int password;
    printf("Enter the username: ");
    scanf("%c", &username);
    printf("Enter the password: ");
    scanf("%d", &password);
    if(username=='a'){
        if(password==12345){
            printf("Login Succesfull");
        }
        else{
            printf("Password is incorrect, Try again");
        }
    } 
    else{
        printf("Username is wrong Try again");
    }

    return 0;
}