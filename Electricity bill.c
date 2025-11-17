#include <stdio.h>
int main() {
    int u;
    float bill;
    scanf("%d", &u);

    if(u <= 100)
        bill = u * 5;
    else if(u <= 200)
        bill = 100*5 + (u-100)*7;
    else
        bill = 100*5 + 100*7 + (u-200)*10;

    printf("Bill = %.2f", bill);
}
