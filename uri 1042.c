#include <stdio.h>

int main() {
    int c[3],v[3], sent, i ,j;

    scanf("%d %d %d", &c[0],&c[1], &c[2]);

    for (i = 0; i < 3; ++i)
    {
        v[i] = c[i];
    }

    for(i =0; i<3; i++)
    {
        for(j= 0; j<3; j++)
        {
            if(c[j] > c[j+1])
            {
                sent = c[j+1];
                c[j+1] = c[j];
                c[j] = sent;
            }
        }
    }
    for (i = 0; i < 3; ++i)
    {
        printf("%d\n", c[i]);
    }
    printf("\n");
    for (i = 0; i < 3; ++i)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}

