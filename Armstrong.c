#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, temp, d, count=0;
    scanf("%d", &n);
    temp=n;
    while(temp){ count++; temp/=10; }
    temp=n;
    while(temp){
        d=temp%10;
        sum += pow(d, count);
        temp/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
