#include <stdio.h>

int main() {

    char nome[100];
    double x,y, total;

    scanf("%s", nome);
    scanf("%lf", &x);
    scanf("%lf", &y);

    total = x + (0.15 * y);
    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
