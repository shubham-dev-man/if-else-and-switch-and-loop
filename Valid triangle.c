#include <stdio.h>
int main() {
    int a,b,c;
    Printf("Enter angles of triangle");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b + c == 180) printf("Valid");
    else printf("Invalid");
}
