#include <stdio.h>

int main() {

    int a, n, i ,soma=0;

    scanf("%d", &a);
    do{
        scanf("%d", &n);
    }while(n<=0);

    for(i=0;i<=n-1;i++){
        soma = soma + a  + i;
    }
    printf("%d\n",soma);
    return 0;
}
