#include<stdio.h>
#include<string.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   if (ch>='a' &&ch<='Z')
   {
    printf("the entered character is an alphabet");
   }
   else {
    printf("the entered character is not an alphabet");
   }
    
    
    
    return 0;
}
