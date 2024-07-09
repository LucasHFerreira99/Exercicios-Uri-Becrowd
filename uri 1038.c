#include <stdio.h>

int main() {

    int x,y;
    double soma;

    scanf("%d %d", &x, &y);

    switch(x)
    {
        case 1:
            soma = y * 4;
            printf("Total: R$ %.2f\n", soma);
            break;
        case 2:
            soma = y * 4.50;
            printf("Total: R$ %.2f\n", soma);
            break;
        case 3:
            soma = y * 5;
            printf("Total: R$ %.2f\n", soma);
            break;
        case 4:
            soma = y * 2;
            printf("Total: R$ %.2f\n", soma);
            break;
        case 5:
            soma = y * 1.50;
            printf("Total: R$ %.2f\n", soma);
            break;
    }



    return 0;
}

