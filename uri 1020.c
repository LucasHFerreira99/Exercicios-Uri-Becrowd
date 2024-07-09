#include <stdio.h>

int main() {

    int dias, meses,mes, anos;

    scanf("%d", &dias);

    anos = dias / 365;
    mes = dias % 365;
    meses  = mes / 30;
    dias = mes % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}
