#include <stdio.h>

int main() {

    int parar=1,  cont=0;
    double i=0.00;
    double j=1,k=0;

    while(parar!=0){
        printf("I=%.1f J=%.1f\n", i, j);
        cont++;
        if(cont==3){
            i=i+0.2;
            k = 0.2 + k;
            if(k == 1){
                k = 0;
            }
            j = 1 + k;
            cont = 0;
        }else{
            j++;
        }
        if(i==2){
            parar  = 0;
        }
    }
    return 0;
}







