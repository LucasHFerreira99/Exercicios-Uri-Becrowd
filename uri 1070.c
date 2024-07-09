#include <stdio.h>

int main() {

    int j, imp=0;
    scanf("%d", &j);

    while(imp !=6){
       if(j % 2 != 0){
            imp++;
            printf("%d\n", j);
       }
       j++;
    }
    return 0;
}


