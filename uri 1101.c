#include <stdio.h>

int main() {

    int m,n, soma=0,i;
    while(1){
        soma =0;
        scanf("%d %d", &m, &n);
        if(m <= 0 || n<=0){
            break;
        }
        if(m<n){
            for(i=m;i<=n;i++){
                printf("%d ", i);
                soma= soma+i;
            }
        }
        if(m>n){
            for(i=n;i<=m;i++){
                printf("%d ", i);
                soma= soma+i;
            }
        }
        if(m == n){
            printf("%d ", m);
            soma = m;
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}
