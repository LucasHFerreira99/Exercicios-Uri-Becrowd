#include <stdio.h>

int main() {

    int i=0;
    double res, x;

    while(i<2){
        scanf("%lf", &x);
        if(x< 0 || x>10){
            printf("nota invalida\n");
        }else{
            res =  x + res;
            i++;
        }
    }
    res =  res  /  2;
    printf("media = %.2f\n", res);

    return 0;
}




