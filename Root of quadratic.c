#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d > 0) printf("Real Roots");
    else if(d == 0) printf("Equal Roots");
    else printf("Imaginary Roots");
}
