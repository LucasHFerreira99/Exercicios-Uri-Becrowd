#include <stdio.h>

int main () {
    int x,i,m,maior;

    while (scanf("%d", &x) == 1){
        for(i=0;i<x;i++){
            scanf("%d", &m);
            if(m>maior){
                maior =m;
            }
        }
        if(maior <10){
            printf("1\n");
        }
        if(maior >=10 && maior<20){
            printf("2\n");
        }
        if(maior >=20){
            printf("3\n");
        }
        maior=0;
    }
    return 0;
}

