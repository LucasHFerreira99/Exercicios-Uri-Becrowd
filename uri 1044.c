#include <stdio.h>

int main() {

    int a,b,maior;

    scanf("%d %d", &a, &b);
    if(a > b)
    {
        maior =a;
        if(maior % b == 0)
        {
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }else{
        maior = b;
        if(maior % a == 0)
        {
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }


    return 0;
}
