#include <stdio.h>

int main() {

    int n,x,y,i=0;
    double res;
    scanf("%d", &n);

    while(i<n){
        scanf("%d %d", &x,  &y);
        if(y ==0){
            printf("divisao impossivel\n");
        }else{
            res = (double)x / (double)y;
            printf("%.1f\n", res);
        }
        i++;
    }


    return 0;
}



