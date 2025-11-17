#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d is the largest\n", a);
    else
        printf("%d is the largest\n", b);

    return 0;
}
