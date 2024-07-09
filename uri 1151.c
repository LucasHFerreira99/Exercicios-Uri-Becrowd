#include <stdio.h>

int main() {

    int n, a=0,b=1,f=0, i;


    scanf("%d", &n);
    if(n==1){
        printf("0\n");
    }else{
        printf("0 1 ");
        for(i=0;i<n-3;i++){
            f = a + b;
            a = b;
            b = f;
            printf("%d ", f);
        }
        if(n !=2){
            f = a + b;
            a = b;
            b = f;
            printf("%d\n", f);
        }

    }




    return 0;
}


