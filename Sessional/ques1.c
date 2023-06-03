#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = strlen(str);
    int s = 0;
    int e = l - 1;

    while (s < e) {
        if (str[s] != str[e]) {
            return 0;
        }
        s++;
        e--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    int flag = isPalindrome(str);
    if (flag) {
        printf("The string is a palindrome");
    } else {
        printf("The string is not a palindrome");
    }

    return 0;
}
