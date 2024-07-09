#include <stdio.h>

void imprimir_vetor_par(int v[5]){
    int i;
    for(i=0;i<5;i++){
        printf("par[%d] = %d\n", i,v[i]);
    }
}

void imprimir_vetor_impar(int v[5]){
    int i;
    for(i=0;i<5;i++){
        printf("impar[%d] = %d\n", i,v[i]);
    }
}

int main() {

    int par[5],impar[5];
    int i,im=0,pa=0,t,j;

    for(i=0;i<15;i++){
        scanf("%d",&t);
        if(t%2==0){
            par[pa]=t;
            pa++;
            if(pa==5){
                imprimir_vetor_par(par);
                pa=0;
            }
        }else{
            impar[im]=t;
            im++;
            if(im==5){
                imprimir_vetor_impar(impar);
                im=0;
            }

        }

    }
    for(j=0;j<im;j++){
        printf("impar[%d] = %d\n", j,impar[j]);
    }
    for(j=0;j<pa;j++){
        printf("par[%d] = %d\n", j,par[j]);
    }




    return 0;
}








