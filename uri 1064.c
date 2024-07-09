#include <stdio.h>

int main() {

    int i, pos = 0;
    double x[6], media=0;

    for(i = 0; i <6; i++){
        scanf("%lf", &x[i]);
        if(x[i] > 0){
            pos++;
            media = x[i] + media;
        }
    }

    media = media / pos;
    printf("%d valores positivos\n", pos);
    printf("%.1f\n", media);
    return 0;
}
