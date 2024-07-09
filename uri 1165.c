#include <stdio.h>

int main() {

    int n,i,j,x,sent=0;

    scanf("%d",  &n);
    for(i=0;i<n;i++){
        sent=0;
        scanf("%d", &x);
        for(j=1;j<=x;j++){
            if(x % j == 0){
                sent++;
            }
        }
        if(sent==2){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }


    }
    return 0;
}
