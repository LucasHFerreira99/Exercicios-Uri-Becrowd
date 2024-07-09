#include <stdio.h>

int main() {

    double a, b, c, res;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    res = (a * c) / 2;
    printf("TRIANGULO: %.3f\n", res);

    res = 3.14159 * (c * c);
    printf("CIRCULO: %.3f\n", res);

    res = ((a + b) / 2) * c;
    printf("TRAPEZIO: %.3f\n", res);

    res = b * b;
    printf("QUADRADO: %.3f\n", res);

    res = a * b;
    printf("RETANGULO: %.3f\n", res);
    return 0;
}
