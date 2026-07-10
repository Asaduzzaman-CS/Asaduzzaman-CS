#include<stdio.h>

char MakeLower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    return ch;
}

int main()
{
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    printf("Lowercase letter = %c\n", MakeLower(letter));

    return 0;
}
