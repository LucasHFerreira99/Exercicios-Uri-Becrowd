#include <stdio.h>

int main() {

    int t, pa,pb,i,sent;
    double g1,g2,pop1,pop2;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        pop1  = pa;
        pop2 = pb;
        sent=0;
        while(sent<=100){
            pop1 = pop1 + pop1 *(g1/100);
            pop1 =  (int)pop1;
            pop2 = pop2 + pop2 *(g2/100);
            pop2= (int)pop2;
            sent++;
            if(pop1>pop2){
                break;
            }
        }
        if(sent>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n",sent);
        }
    }

    return 0;
}





















