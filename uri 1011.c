#include <stdio.h>

int main() {

    double raio, soma;

    scanf("%lf", &raio);

    soma = (4.0/3) * 3.14159 * (raio * raio * raio);

    printf("VOLUME = %.3f\n", soma);

    return 0;
}
