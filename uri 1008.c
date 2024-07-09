#include <stdio.h>

int main() {

    int x,y;
    double z, soma;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%lf", &z);

    soma = y * z;

    printf("NUMBER = %d\n",x);
    printf("SALARY = U$ %.2f\n", soma);
    return 0;
}
