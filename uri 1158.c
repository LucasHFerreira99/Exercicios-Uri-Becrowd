#include <stdio.h>

int main() {

    int n,i,j,x,y,soma=0,sent=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d", &x,&y);
        j=x;
        sent =0;
        soma = 0;
        while(sent != y){
             if(j %  2 != 0){
                soma = soma + j;
                sent++;
            }
            j++;
        }
        printf("%d\n", soma);

    }

    return 0;
}








