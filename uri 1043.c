#include <stdio.h>

int retornaPositivo(int i)
{
    if(i < 0)
    {
        i = i*-1;
    }
    return i;
}

int main() {

    double a,b,c, som,x1,x2,x3;

    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = retornaPositivo(b-c);
    x2 = retornaPositivo(a-c);
    x3 = retornaPositivo(a-b);

    if((x1< a) && (a< b+c) && (x2<b) && (b<a+c) && (x3<c) &&(c<a+b))
    {
        som = a+b+c;
        printf("Perimetro = %.1f\n", som);
    }else{
        som = ((a+b)*c) / 2;
        printf("Area = %.1f\n", som);
    }

    return 0;
}
