#include <stdio.h>

int main() {

    double n1,n2,n3,n4;
    double media, exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    printf("Media: %.1f\n", media);
    if(media >=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(media >= 5.0 && media <=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (exame + media) / 2;
        if(media >=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }
        if(media <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }
    return 0;
}


