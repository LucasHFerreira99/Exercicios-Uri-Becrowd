#include <stdio.h>

int main() {

    int n,i,j,k=1;
    scanf("%d", &n);

    for(i = 0; i<n;i++){
        for(j = k; j<k+4; j++){
            if(j==k+3){
                printf("PUM\n");
            }else{
                printf("%d ",  j);;
            }
        }
        k = k+4;
    }
    return 0;
}









