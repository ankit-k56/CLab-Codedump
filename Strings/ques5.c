#include <stdio.h>
#include <string.h>

int findLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char s1[100],s2[100];
    int len1, len2, i, j;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    len1 = findLength(s1);
    len2 = findLength(s2);

    // printf("\n%c\n",s1[len1-1]);
    s1[len1] = ' ';
    i=len1+1;
    for ( j = 0; j < len2;) {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';

    printf("Concatenated string: %s\n", s1);

    return 0;
}