#include <stdio.h>

int main() {

    double s, i,j=2;
    s  = 1;
    for(i=3;i<=39;i+=2){
        s = s + (i/j);
        j= j*2;

    }
    printf("%.2f\n",s);

    return 0;
}






