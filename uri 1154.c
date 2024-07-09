#include <stdio.h>

int main() {

    double n,media=0, i=0;


    while(1){
        scanf("%lf", &n);
        if(n<0){
            break;
        }
        media = media+n;
        i++;
    }
    media= media/i;
    printf("%.2f\n",media);


    return 0;
}




