#include <stdio.h>

int main() {

    int m;
    while(m != 2002){
        scanf("%d", &m);
        if(m==2002){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }
        if(m == 2002){
            break;
        }

    }


    return 0;
}

