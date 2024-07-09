#include <stdio.h>

int main() {

    double n[61];
    int i,x,t,j;
    n[0]=0;
    n[1]=1;
    for(i=2;i<=60;i++){
       n[i]= n[i-1]+n[i-2];
    }
    scanf("%d", &x);
    for(i=0;i<x;i++){
        scanf("%d", &t);
        printf("Fib(%d) = %.0f\n",t,n[t]);

    }
    return 0;
}





