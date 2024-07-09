#include <stdio.h>

int main() {

    int a,b, horas;

    scanf("%d %d", &a, &b);

    if(a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    if(a < b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }
    if(a>b)
    {
        horas = 24-a;
        horas = horas + b;
        printf("O JOGO DUROU %d HORA(S)\n", horas);
    }

    return 0;
}
