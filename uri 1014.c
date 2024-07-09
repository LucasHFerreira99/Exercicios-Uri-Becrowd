#include <stdio.h>

int main() {

    int x;
    double y, soma;

    scanf("%d", &x);
    scanf("%lf", &y);

    soma = x / y;

    printf("%.3f km/l\n", soma);

    return 0;
}
