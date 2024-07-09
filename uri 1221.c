#include <stdio.h>
#include <math.h>

int primo (int x) {

    int i, raiz;
    if(x<2){
        return 0;
    }
    if(x==2)
    {
        return 1;
    }
    if(x%2==0)
    {
        return 0;
    }
    raiz=sqrt(x);
    for(i=3;i<=raiz; i=i+2)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int main() {

    int n, i=0,j;

    scanf("%d", &n);
    int v[n];
    while(i!=n){
        scanf("%d", &v[i]);
        j = primo(v[i]);
        if(j == 1)
        {
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
        i++;
    }

    return 0;
}
