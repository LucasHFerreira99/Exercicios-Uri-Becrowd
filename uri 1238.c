#include <stdio.h>
#include <string.h>


int main() {

    char x[100], y[100], z[100];
    int q,w,caso,u,o;
    int g;
    scanf("%d", &caso);

    for(int j = 0; j<caso; j++)
    {
        scanf("%s", &x);
        scanf("%s", &y);
        q = strlen(x);
        w = strlen(y);
        printf("palavra 1 %s\n", x);
        printf("palavra 2 %s\n", y);
        printf("palavra 3 %s\n", z);
        o = 0;
        u = 1;
        for(int i=0; i<=q+w; i++)
        {
            if(x[i] != '\0' || i<q){
                z[o] = x[i];
                z[u] = y[i];
                o=o+2;
                u=u+2;
                g = u;
                printf("POSICAO %d",g);
            }else{
                if(y[g] != '\0')
                {
                    g++;
                    printf("POSICAO %d",g);
                    printf("letra %c ------", y[i]);
                    z[g] = y[i];
                    printf("\n%s\n", z);

                }



            }

        }
        printf("%s ACABOU", z);
    }

    return 0;
}
