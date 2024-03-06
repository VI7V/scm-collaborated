#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, result, choice;
    printf("enter the number according to your  choice:\n");
    printf("\n1.addition\n2.subtraction\n3.division\n4.multiplication\n");
    scanf("%d", &choice);
    printf("enter the first wala number");
    scanf("%d", &a);
    printf("enter the second wala number");
    scanf("%d", &b);
    switch (choice)
    {
    case 1:
        result = a + b;
        printf("the summ is %d", result);
        break;
    case 2:
        result = a - b;
        printf("the difference is %d", result);
        break;
    case 3:
        result = a / b;
        printf("the remainder is %d", result);
        break;
    case 4:
        result = a * b;
        printf("the product is %d", result);
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}
