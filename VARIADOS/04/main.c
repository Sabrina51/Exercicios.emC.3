#include <stdio.h>

int main()
{
    float n[10], quadrado[4];
    int i;

    printf("\n Digite 5 numeros: \n\n");
    for(i=0; i<=4; i++){
        printf(" ");
        scanf("%f", &n[i]);
        }

    printf("\n Raizes dos 5 numeros respectivamente: \n");
    for(i=0; i<=4; i++){
        quadrado[i] = n[i] * n[i];
        printf("\n %.f", quadrado[i]);
        }


    printf("\n\n ======== FIM ========\n");

    printf("\n");

    system("pause");

    return 0;
}
