#include <stdio.h>

int main() {

    int x,y, i, soma=0;

    scanf("%d %d", &x, &y);

    if(x == y){
        printf("0\n");
    }else{
        if(x > y){
            for(i=x-1;  i>y;  i--){
                if(i %2 != 0){
                    soma =  soma + i;
                }
            }
        }else{
            for(i=x+1;  i<y;  i++){
                if(i %2 != 0){
                    soma =  soma + i;
                }
            }
        }
        printf("%d\n", soma);
    }


    return 0;
}



