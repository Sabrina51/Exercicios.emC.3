#include <stdio.h>

int main()
{
    float nota[15], soma = 0, media;


    printf("\n ======== QUESTAO 5 ========\n");

    printf("\n Digite as notas: \n");
    for(int i = 1; i<=5; i++){
        printf("\n Aluno %d: ", i);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }

    printf("\n =============\t============= \n");

    printf("\n A media geral e igual a %.1f \n", soma/5);

    printf("\n ============ FIM =========== \n\n\n");

    system("pause");


    return 0;
}
