#include <stdio.h>


void bubble_sort (int vetor[], int n, int *troca) {
    int k, j, aux;
    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                *troca= *troca + 1;
            }
        }
    }
}

int main() {

    int n,l,i,j, troca=0;
    scanf("%d", &n);
    int v[n];

    for(i=0;i<n;i++){
        scanf("%d", &l);
        for(j=0;j<l;j++)
        {
            scanf("%d", &v[j]);

        }
        troca = 0;
        bubble_sort(v, l, &troca);
        printf("Optimal train swapping takes %d swaps.\n", troca);

    }


    return 0;
}
