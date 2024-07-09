#include <stdio.h>

int main() {

    int x,i,j,soma=0,sent=0;

    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        j=x;
        sent =0;
        soma = 0;

        while(sent != 5){
             if(j %  2 == 0){
                soma = soma + j;
                sent++;
            }
            j++;
        }
        printf("%d\n", soma);
    }


    return 0;
}




















