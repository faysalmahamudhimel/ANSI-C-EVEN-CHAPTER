#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alpha bate two now this is an vowel or consonent=");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is an vowel=%c",ch);
        break;
    default:

        printf("This is an consonant=%c",ch);
        break;
    }
    return 0;
}