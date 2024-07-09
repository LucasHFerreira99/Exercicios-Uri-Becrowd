#include <stdio.h>

int main() {

    int i, al=0, gas=0, die=0;

    do{
        do{
            scanf("%d", &i);
        }while(i<1  || i  >4);
        if(i == 1){
            al++;
        }
        if(i == 2){
            gas++;
        }
        if(i == 3){
            die++;
        }
    }while(i!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    return 0;
}








