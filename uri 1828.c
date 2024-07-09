#include <stdio.h>
#include <string.h>

int main () {
    int n,i;
    char mao1[100], mao2[100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%s", mao1);
        scanf("%s", mao2);
        if(strcmp(mao1,mao2) == 0){
            printf("Caso #%d: De novo!\n", i+1);
        }

        if(strcmp(mao1,"tesoura")==0 && strcmp(mao2,"papel")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"tesoura")==0 && strcmp(mao1,"papel")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"papel")==0 && strcmp(mao2,"pedra")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"papel")==0 && strcmp(mao1,"pedra")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"pedra")==0 && strcmp(mao2,"lagarto")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"pedra")==0 && strcmp(mao1,"lagarto")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"lagarto")==0 && strcmp(mao2,"Spock")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"lagarto")==0 && strcmp(mao1,"Spock")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"Spock")==0 && strcmp(mao2,"tesoura")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"Spock")==0 && strcmp(mao1,"tesoura")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"tesoura")==0 && strcmp(mao2,"lagarto")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"tesoura")==0 && strcmp(mao1,"lagarto")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"lagarto")==0 && strcmp(mao2,"papel")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"lagarto")==0 && strcmp(mao1,"papel")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"papel")==0 && strcmp(mao2,"Spock")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"papel")==0 && strcmp(mao1,"Spock")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"Spock")==0 && strcmp(mao2,"pedra")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"Spock")==0 && strcmp(mao1,"pedra")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

        if(strcmp(mao1,"pedra")==0 && strcmp(mao2,"tesoura")==0){
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        if(strcmp(mao2,"pedra")==0 && strcmp(mao1,"tesoura")==0){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }



    }
    return 0;
}


