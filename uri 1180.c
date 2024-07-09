#include <stdio.h>


int main() {

    int n,i,menor=1000,posicao=0;
    scanf("%d", &n);
    int x[n];

    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        if(x[i]<menor){
            menor=x[i];
            posicao=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,posicao);

    return 0;
}








