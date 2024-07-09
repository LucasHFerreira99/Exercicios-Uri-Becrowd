#include <stdio.h>
#include<iostream>
#include <algorithm>

using namespace std;
int main() {

    double a,b,c,d[3];

    scanf("%lf %lf %lf", &d[0], &d[1], &d[2]);

    std::sort(d, d+3);
    a = d[2];
    b = d[1];
    c = d[0];

    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((a*a) ==((b*b)+(c*c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if((a*a) > ((b*b)+(c*c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a) < ((b*b)+(c*c)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b &&  b==c && c==a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b && (b!=c || c!=a)) || ( a==c && (c!=b || a!=b)) || (b==c && (b!=a || c!=a)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}

