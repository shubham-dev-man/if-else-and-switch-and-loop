#include <stdio.h>
int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if(sp > cp)
        printf("Profit %.2f%%", ((sp-cp)/cp)*100);
    else if(sp < cp)
        printf("Loss %.2f%%", ((cp-sp)/cp)*100);
    else
        printf("No Profit No Loss");
}
