#include <stdio.h>

int main() {

    int n,i;
    double x1,x2,x3,res=0;

    scanf("%d", &n);

    for(i=0;  i<n;i++){
        scanf("%lf %lf %lf", &x1,&x2,&x3);
        res  = (2*x1+3*x2+5*x3)  / (2+3+5);
        printf("%.1f\n", res);
    }
    return 0;
}



