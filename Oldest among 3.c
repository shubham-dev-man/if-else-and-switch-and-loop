#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c) printf("A is oldest");
    else if(b>=a && b>=c) printf("B is oldest");
    else printf("C is oldest");
}
