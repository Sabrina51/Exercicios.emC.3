#include <stdio.h>

int main()
{

    int cont1, cont2, valor[6], inverter[6];

    printf("\n Digite 6 numeros: \n\n");
       for (cont1 = 0; cont1 <= 5; cont1++){
            printf(" ");
            scanf("%d", &valor[cont1]);
       }


       printf("\n ============\t============ \n\n");

       for (cont1 = 0, cont2 = 5; cont1 < 6 && cont2 >=0; cont1 ++, cont2 --){
            inverter[cont1] = valor[cont2];
            printf(" ");
            printf("%d\n", inverter[cont1]);
       }


    printf("\n =========== FIM =========== \n\n\n");

    system("pause");

    return 0;
}
