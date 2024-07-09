#include <stdio.h>
int main(){

    int n, i, ganhou=0, empate=0;

    scanf("%d", &n);

    int v[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
        if(v[0] < v[i])
        {
            ganhou++;
        }
        if(v[0] == v[i])
        {
            empate++;
        }
    }
    if(empate == n)
    {
        printf("S\n");
    }else{
        if(ganhou == 0){
        printf("S\n");
        }else{
        printf("N\n");
        }
    }


    return 0;
}
