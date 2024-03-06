#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num > 0 ? 1 : (num < 0 ? -1 : 0)) {
        case 1:
            printf("%d is a positive number.\n", num);
            break;
        case -1:
            printf("%d is a negative number.\n", num);
            break;
        default:
            printf("%d is zero.\n", num);
    }

    return 0;
}
