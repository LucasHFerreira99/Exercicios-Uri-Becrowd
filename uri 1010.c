#include <stdio.h>

int main() {

    int x1,y1, x2,y2;
    double v1,v2, soma;

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%lf", &v1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%lf", &v2);

    soma = (y1 * v1) + (y2 * v2);

    printf("VALOR A PAGAR: R$ %.2f\n", soma);
    return 0;
}
