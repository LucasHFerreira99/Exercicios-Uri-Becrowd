#include <stdio.h>

int main() {

    int x,i,j, k,l;

    scanf("%d", &x);

    j = x / 100;

    printf("%d\n", x);

    printf("%d nota(s) de R$ 100,00\n",j);

    l= x - j*100;

    if(l != 0){
        k= l/50;
        printf("%d nota(s) de R$ 50,00\n", k);
        l = l - k * 50;
        if(l!=0)
        {
            k = l/20;
            printf("%d nota(s) de R$ 20,00\n", k);
            l = l - k * 20;
            if(l != 0)
            {

                k = l/10;
                printf("%d nota(s) de R$ 10,00\n", k);
                l = l - k * 10;
                if(l != 0)
                {
                    k = l/5;
                    printf("%d nota(s) de R$ 5,00\n", k);
                    l = l - k * 5;
                     if(l != 0)
                    {
                        k = l/2;
                        printf("%d nota(s) de R$ 2,00\n", k);
                        l = l - k * 2;
                         if(l != 0)
                        {
                            k = l/1;
                            printf("%d nota(s) de R$ 1,00\n", k);
                            l = l - k * 1;
                        }else{
                            printf("0 nota(s) de R$ 1,00\n");
                        }
                    }else
                    {
                        printf("0 nota(s) de R$ 2,00\n");
                        printf("0 nota(s) de R$ 1,00\n");
                    }
                }else{
                    printf("0 nota(s) de R$ 5,00\n");
                    printf("0 nota(s) de R$ 2,00\n");
                    printf("0 nota(s) de R$ 1,00\n");
                }
            }else{
                printf("0 nota(s) de R$ 10,00\n");
                printf("0 nota(s) de R$ 5,00\n");
                printf("0 nota(s) de R$ 2,00\n");
                printf("0 nota(s) de R$ 1,00\n");
            }

        }else{
            printf("0 nota(s) de R$ 20,00\n");
            printf("0 nota(s) de R$ 10,00\n");
            printf("0 nota(s) de R$ 5,00\n");
            printf("0 nota(s) de R$ 2,00\n");
            printf("0 nota(s) de R$ 1,00\n");
        }
    }else{
        printf("0 nota(s) de R$ 50,00\n");
        printf("0 nota(s) de R$ 20,00\n");
        printf("0 nota(s) de R$ 10,00\n");
        printf("0 nota(s) de R$ 5,00\n");
        printf("0 nota(s) de R$ 2,00\n");
        printf("0 nota(s) de R$ 1,00\n");

    }


    return 0;
}
