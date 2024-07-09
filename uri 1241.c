#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
    char x1[1000], x2[10000];
    int i, j, t1,t2,t3;
    int y, r, k;

    scanf("%d", &j);
    for(i = 0; i<j;i++)
    {
        scanf("%s", x1);
        scanf("%s", x2);
        t1 = strlen(x1);
        t2 = strlen(x2);
        r = 0;
        if(t1> t2 || t1 == t2)
        {
            y = 0;
            t3 = t1 - t2;
            for(k = t3; k<t1;k++)
            {
                if(x1[k] == x2[r])
                {
                    y++;
                }
                r++;
            }
            if(y == t2)
            {
                printf("encaixa\n");
            }else{
                printf("nao encaixa\n");
            }
        }else{
            printf("nao encaixa\n");
        }

    }



return 0;
}
