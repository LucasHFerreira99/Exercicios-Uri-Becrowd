#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {

    int n,i,x,tam1, tam2,par=0, impar=0,j=0,k=0;

    scanf("%d", &n);
    int v[n];


    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        v[i]=x;
        if(x%2==0)
        {
            par++;
        }else{
            impar++;
        }
    }

    int im[impar];
    int p[par];

    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            p[j] = v[i];
            j++;
        }else{
            im[k]= v[i];
            k++;
        }
    }

    tam1 = sizeof(p)/sizeof(p[0]);
    tam2 = sizeof(im)/sizeof(im[0]);


    sort(p, p+tam1);
    sort(im, im+tam2,greater<int>());

    for (i = 0; i < tam1; ++i)
        printf("%d\n", p[i]);
    for (i = 0; i < tam2; ++i)
        printf("%d\n",im[i]);
    return 0;
}
