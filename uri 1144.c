#include <stdio.h>
#include <math.h>

int main() {

    int n,i,j,k=1,t=1, h=0;
    double m, v[3];
    scanf("%d", &n);
    for(i = 0; i<n;i++){
        for(j=1;j<7;j++){
            if(j < 4){
                m = pow(k, t);
                printf("%.0f", m);
                if(m == k && k !=1){
                    v[j-1] = m;
                }else{
                    v[j-1] = m+1;
                }
                if(m == k && k ==1 &&  j==1){
                    v[j-1] = 1;
                }

                t++;
                h=0;
            }
            if(j > 3){
                printf("%.0f", v[h]);
                h++;
            }
            if(j == 3 || j == 6){
                printf("\n");
            }else{
                printf(" ");
            }

        }
        k++;
        t=1;
    }
    return 0;
}


















