#include <stdio.h>
#include <math.h>

int main() {

    int n,i,j,k=1,t=1;
    double m;
    scanf("%d", &n);

    for(i = 0; i<n;i++){
        for(j=1;j<4;j++){
            m = pow(k, t);
            printf("%.0f", m);
            t++;
            if(j!=3){
                printf(" ");
            }
        }
        k++;
        t=1;
        printf("\n");
    }
    return 0;
}








