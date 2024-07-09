#include <stdio.h>

int main() {

    int n,i, ganhou=0;


    scanf("%d", &n);
    int portas[n];
    for(i=0; i<n;i++)
    {
        scanf("%d", &portas[i]);
        if(portas[i] != 1)
        {
            ganhou++;
        }
    }
    printf("%d\n", ganhou);



    return 0;
}
