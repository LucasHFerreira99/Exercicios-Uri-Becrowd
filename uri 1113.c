#include <stdio.h>

int main() {

    int j=1,m,n, soma=0,i;
    while(m != n){
        scanf("%d %d", &m, &n);
        if(m == n){
            break;
        }
        if(m>n){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }

    }


    return 0;
}
