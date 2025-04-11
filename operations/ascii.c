#include <stdio.h>

int main() {
    char letter, newLetter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    newLetter = letter - 32;
    
    printf("%c", newLetter);

    return 0;
}