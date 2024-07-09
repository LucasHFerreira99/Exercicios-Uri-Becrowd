
#include <stdio.h>

int main() {

    double n , n2;
    int y,x, x2, cont = 0;

    scanf("%lf", &n);

    y = n;
    x = y / 100;

    printf("NOTAS:\n", x);

    printf("%d nota(s) de R$ 100.00\n", x);

    x = y % 100;
    x2 = x;
    x = x / 50;

    printf("%d nota(s) de R$ 50.00\n", x);

    x2 = x2 % 50;
    x = x2;
    x = x / 20;

    printf("%d nota(s) de R$ 20.00\n", x);

    x2 = x2 % 20;
    x = x2;
    x = x / 10;

    printf("%d nota(s) de R$ 10.00\n", x);

    x2 = x2 % 10;
    x = x2;
    x = x / 5;

    printf("%d nota(s) de R$ 5.00\n", x);

    x2 = x2 % 5;
    x = x2;
    x = x / 2;

    printf("%d nota(s) de R$ 2.00\n", x);

    x2 = x2 % 2;
    x = x2;
    x = x / 1;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", x);

    n2 = n - y;
    while(n2 > 0.50)
    {
        n2 = n2 - 0.50;
        cont ++;
    }

    printf("%d moeda(s) de R$ 0.50\n", cont);
    cont = 0;
    while(n2 > 0.25)
    {
        n2 = n2 - 0.25;
        cont ++;
    }
    printf("%d moeda(s) de R$ 0.25\n", cont);
    cont = 0;
    while(n2 > 0.10)
    {
        n2 = n2 - 0.10;
        cont ++;
    }
    printf("%d moeda(s) de R$ 0.10\n", cont);
    cont = 0;

    while(n2 > 0.05)
    {
        n2 = n2 - 0.05;
        cont ++;
    }
    printf("%d moeda(s) de R$ 0.05\n", cont);
    cont = 0;
    while(n2 >= 0.001)
    {
        n2 = n2 - 0.01;
        cont ++;
    }
    printf("%d moeda(s) de R$ 0.01\n", cont);
    return 0;
}
