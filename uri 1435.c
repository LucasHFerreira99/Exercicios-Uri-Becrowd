#include <stdio.h>
#define TAM 12
int main() {

    int i,j,n;
    scanf("%d",&n);

    while(n!=0){
        int **M;
        M = malloc (n * sizeof (int *));
        for (i = 0; i < n; ++i)
        M[i] = malloc (n * sizeof (int));

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                M[i][j]=1;
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!= 0 && j != 0){
                    if(M[i][j-1]==1 && M[i][j+1]==1 && M[i+1][j]==1 && M[i-1][j+1]==1){
                        M[i][j]=2;
                    }
                }

            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ", M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}








