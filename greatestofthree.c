#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter third numbers: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("%d is the largest\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest\n", b);
    else
        printf("%d is the largest\n", c);

    return 0;
}
