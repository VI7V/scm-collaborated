#include <stdio.h>

int main() {
    char inputChar;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &inputChar);
    if (inputChar>='a' && inputChar<='z')
    {
        printf("the alphabet is in lowercase");
    }
    else{
        printf("thee alphabet entered is not in lowercase");
    }

    return 0;
}

