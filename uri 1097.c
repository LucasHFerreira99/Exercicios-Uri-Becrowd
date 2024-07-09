#include <stdio.h>

int main() {

    int i=1, j=7,k=7, parar=1,  cont=0;

    while(parar!=0){
        printf("I=%d J=%d\n", i, j);
        cont++;
        if(cont==3){
            i=i+2;
            k = k +2;
            j = k;
            cont = 0;
        }else{
            j--;
        }
        if(i==11 && j==17){
            parar  = 0;
        }

    }
    return 0;
}






