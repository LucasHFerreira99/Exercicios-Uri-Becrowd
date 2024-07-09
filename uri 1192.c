#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char a[3],r,b[3];
    int x,y,i,n;
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%s", a);

        *b = strlwr(a);
        r=b[1];

        x  =  (int) a[0];
        y = (int) a[2];

        if(y == x){
            x  = x*y;
            printf("%d\n",x);
        }else{
            if(r == a[1]){
                x  = x  + y;
                printf("%d\n",x);
            }else{
                x  = x-y;
                printf("%d\n",x);
            }
        }
    }

    return 0;
}
