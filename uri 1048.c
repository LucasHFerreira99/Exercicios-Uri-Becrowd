#include <stdio.h>

int main() {

    double salario, reajuste, novo_salario;
    int percentual;

    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400){
        percentual = 15;
        reajuste = salario * 0.15;
        novo_salario = salario + reajuste;
    }

    if(salario >= 400.01 && salario <= 800){
        percentual = 12;
        reajuste = salario * 0.12;
        novo_salario = salario + reajuste;
    }
    if(salario >= 800.01 && salario <= 1200){
        percentual = 10;
        reajuste = salario * 0.10;
        novo_salario = salario + reajuste;
    }
    if(salario >= 1200.01 && salario <= 2000){
        percentual = 7;
        reajuste = salario * 0.07;
        novo_salario = salario + reajuste;
    }
     if(salario > 2000){
        percentual = 4;
        reajuste = salario * 0.04;
        novo_salario = salario + reajuste;
    }

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);
    return 0;
}
