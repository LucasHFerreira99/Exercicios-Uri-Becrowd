#include <stdio.h>
int main()
{
    int c,i,j;
    char T[2];
    double M[12][12],soma=0.0;

    scanf("%d",&c);
    scanf("%s",&T);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
            if(j==c){
            soma+=M[i][j];
            }
        }

    }
    if(T[0]=='S'){
        printf("%.1lf\n",soma);
    }else{
        if(T[0]=='M'){
            printf("%.1lf\n",soma/12.0);
        }
    }
    return 0;
}

