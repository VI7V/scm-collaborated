#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = 2 % 5;
    b = -2 % 5;
    c = 2 % -5;
    d = -2 % -5;
    printf("%d\n%d\n%d\n%d", a, b, c, d);
    return 0;
}
