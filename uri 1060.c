#include <stdio.h>

int main() {

    int i, teste = 0;
    double x[6];

    for(i = 0; i <6; i++){
        scanf("%lf", &x[i]);
        if(x[i] > 0){
            teste++;
        }
    }
    printf("%d valores positivos\n", teste);
    return 0;
}

