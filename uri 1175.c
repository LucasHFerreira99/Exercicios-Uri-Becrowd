#include <stdio.h>

int main() {

    int n[20];
    int i,sent,j=19;

    for(i=0;i<20;i++){
        scanf("%d", &n[i]);
    }
    for(i=0;i<20;i++){
        sent = n[i];
        n[i] = n[j];
        n[j] = sent;
        j--;
        if(j==9){
            break;
        }
    }

    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}




