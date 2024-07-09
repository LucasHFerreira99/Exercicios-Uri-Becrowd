#include <stdio.h>

int main() {

    int m,x,y;
    while(1){
        scanf("%d %d", &x,  &y);
        if(x == NULL || y == NULL){
            break;
        }
        if(x>0 && y> 0){
            printf("primeiro\n");
        }
        if(x<0 && y> 0){
            printf("segundo\n");
        }
        if(x<0 && y< 0){
            printf("terceiro\n");
        }
        if(x>0 && y< 0){
            printf("quarto\n");
        }

    }


    return 0;
}


