#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    printf("enter an aplhabet");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("the entered character is a vowel \n");
        break;
    case 'e':
    printf("the entered character is a vowel");
    break;
     case 'i':
    printf("the entered character is a vowel");
    break;
     case 'o':
    printf("the entered character  is a vowel");
    break;
     case 'u':
    printf("the entered character  is a vowel");
    break;
     case 'A':
    printf("the entered character  is a vowel");
    break;
     case 'E':
    printf("the entered character  is a vowel");
    break;
     case 'I':
    printf("the entered character  is a vowel");
    break;
     case 'O':
    printf("the entered character  is a vowel");
    break;
     case 'U':
    printf("the entered character  is a vowel");
    break;
    default:
        printf("entered character is not a vowel");
        break;
    }
    
    return 0;
}
