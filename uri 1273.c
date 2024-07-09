#include <stdio.h>
#include <string.h>

int main() {

    int n,i,j;
    int tam=0,tam2=0,tam3=0,tamMax=0,pal=0,vezes=0;
    char v[100][100];

    do{
        pal = 0;
        tam2 = 0;
        tam3=0;
        tamMax=0;
        scanf("%d", &n);
        if(n != 0 && vezes !=0){
            printf("\n");
            vezes++;
        }


        for(i = 0;i<n;i++)
        {
            scanf("%*C");
            scanf("%s", v[i]);
            tam = strlen(v[i]);
            if(tam >= tamMax){
                tamMax = tam;
            }
            if(i != 0 && tam == tamMax){
                pal++;
            }
        }
        if(pal!= n)
        {
            for(i = 0; i<n; i++)
            {
                tam2 = strlen(v[i]);
                if(tam2 < tamMax){
                    tam3= tamMax - tam2;
                }else{
                    tam3 = 0;
                }

                if(tam3!= 0){
                    for(j=0; j<tam3;j++){
                        printf(" ");
                    }
                }
                if(i!=n-1){
                    printf("%s\n", v[i]);
                }else{
                    printf("%s\n\n", v[i]);
                }
            }
        }else{
            for(i=0;i<n;i++){
                printf("%s\n", v[i]);

            }
        }


    }while(n!=0);


    return 0;
}

