// Accept a lowercase character from the user and check whether the character is a vowel or consonant. (Hint: a,e,i,o,u are vowels)

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Alphabet");
    scanf("%c",&ch);
    ch=tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Not  vowel");
    }
    return 0;
}