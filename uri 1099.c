#include <stdio.h>

int main() {

    int n,i,j,soma,k,x,y;
    scanf("%d", &n);

    for(i =0; i<n;i++){
        soma = 0;
        j = 1;
        scanf("%d %d", &x, &y);

        if(x<y){
            k=x+1;
            while(j != 0){
                if(k>=y){
                    j=0;
                    break;
                }
                if(k % 2 != 0){
                    soma = soma + k;
                }
                k++;
            }
        }
        if(x>y){
            k =y+1;
            while(j != 0){
                if(k>=x){
                    j=0;
                    break;
                }
                if(k % 2 != 0){
                    soma = soma + k;
                }
                k++;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}
