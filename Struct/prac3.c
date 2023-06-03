#include <stdio.h>
#include <string.h>

void reverseWords(char sentence[])
{
    int start = 0;
    int end = 0;
    int length = strlen(sentence);

    while (end < length)
    {
        if (sentence[end] != ' ')
        {
            start = end;

            while (sentence[end] != ' ' && sentence[end] != '\0')
                end++;

            int wordLength = end - start;
            int i;

            for (i = 0; i < wordLength / 2; i++)
            {
                char temp = sentence[start + i];
                sentence[start + i] = sentence[end - i - 1];
                sentence[end - i - 1] = temp;
            }
        }
        else
        {
            end++;
        }
    }
}

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Removing the trailing newline character
    if (sentence[strlen(sentence) - 1] == '\n')
        sentence[strlen(sentence) - 1] = '\0';

    printf("Original sentence: %s\n", sentence);

    reverseWords(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
