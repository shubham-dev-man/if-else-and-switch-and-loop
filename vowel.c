#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for easy checking
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
