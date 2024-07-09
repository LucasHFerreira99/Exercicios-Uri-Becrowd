#include <stdio.h>

int main() {

    int x,z ,y=0,t=0;

    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }while(x>=z);

    while(y<z){
        if(y<z){
            y = y + x;
            t++;
        }
        x++;
    }
    printf("%d\n",t);
    return 0;
}

