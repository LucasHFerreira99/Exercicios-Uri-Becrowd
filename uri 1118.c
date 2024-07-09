#include <stdio.h>

int main() {

    int i=0, p, x,y, vit_int=0, vit_gre=0, emp=0, grenal=0;

    while(p !=2){
        scanf("%d %d",  &x,&y);
        if(x>y){
            vit_int = vit_int + 1;
        }else{
            vit_gre = vit_gre +1;
        }
        if(x == y){
            emp += 1;
        }
        grenal++;
        do{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &p);
        }while(p<1 ||  p>2);
    }

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vit_int);
    printf("Gremio:%d\n", vit_gre);
    printf("Empates:0\n", emp);
    if(vit_int>vit_gre){
        printf("Inter venceu mais\n");
    }else{
        printf("Gremio venceu mais\n");
    }

    return 0;
}





