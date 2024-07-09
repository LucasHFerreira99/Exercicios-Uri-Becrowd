#include <stdio.h>
#define TAM 12
int main() {

    char c;
    double M[TAM][TAM], soma=0, media=0, cont=0;
    int i,j;

    scanf("%c", &c);

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            scanf("%lf", &M[i][j]);
            if(j<i){
                if(c == 'S'){
                    soma = soma + M[i][j];
                }
                if(c == 'M'){
                    media = media + M[i][j];
                    cont++;
                }
            }
        }
    }
    media = media / cont;
    if(c == 'S'){
        printf("%.1f\n",soma);
    }else{
        printf("%.1f\n",media);
    }


    return 0;
}

