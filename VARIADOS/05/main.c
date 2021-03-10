#include <stdio.h>

int main()
{

    int i, vetor[8], x, y , xx, yy;

    printf("\n ======== QUESTAO 3 ========\n\n");

    for(i=1; i<=8; i++){
        printf(" Vertor Posicao %d: ", i);
        scanf("%d", &vetor[i]);
        }

    printf("\n ============\t============ \n");

    printf("\n Escolha as posicoes que deseja soma:\n");
    printf("\n X: ");
    scanf("%d",&x);
    printf("\n Y: ");
    scanf("%d",&y);

    printf("\n ============\t============ \n");

    xx = vetor[x];
    yy = vetor[y];

    printf("\n A soma dos vetores das posicaes %d e %d e igual a  %d \n", x, y, xx + yy);

    printf("\n ========= FIM ========= \n");

    system("pause");

    return 0;
}
