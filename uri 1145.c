#include <stdio.h>


int main() {

    int x,y,i,k=1;
    scanf("%d %d", &x,&y);

    do{
        for(i = 0; i<x;i++){
            printf("%d",k);
            if(i < x-1){
                printf(" ");
            }
            k++;
        }
        printf("\n");
    }while(k <= y);
    return 0;
}



















