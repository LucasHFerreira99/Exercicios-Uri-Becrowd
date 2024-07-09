#include <stdio.h>

int main() {

    int n, i,t;


    scanf("%d", &n);
    t = n;
    for(i=1;i<n;i++){
        t= (n-i) * t;
    }
    printf("%d\n",t);

    return 0;
}



