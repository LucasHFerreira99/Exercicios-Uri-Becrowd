#include <stdio.h>


int main(){

    double x, n,r;
    n = 3.14159;

    scanf("%lf", &x);
    r = n * (x * x);

    printf("A=%.4f\n",r);
    return 0;
}
