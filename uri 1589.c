#include <stdio.h>

int main() {

    int n,k,i,p;

    scanf("%d", &n);

    for(p=0;p<n;p++){
        scanf("%d %d", &i, &k);
        printf("%d\n", i+k);
    }

    return 0;
}
