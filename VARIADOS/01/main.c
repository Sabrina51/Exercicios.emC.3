#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n,n1, n2;
    char n3[4];
    char l[2];

    printf("\n \t---------- COMPLEMENTO BIT A BIT ----------\t \n");
    printf(" Digite um n�mero inteiro: "); scanf("%d", &n);
    printf(" Complemento do n�mero � %d\n", ~n);

    printf("\n \t---------- DESLOCAMENTO DO 1� PELO 2� ----------\t ");
    printf("\n Digite um n�mero inteiro: "); scanf("%d", &n1); fflush(stdin);
    printf(" Digite outro n�mero inteiro: "); scanf("%d", &n2); fflush(stdin);
    printf(" Esquerda: %d \n Direita %d\n", n1<<n2, n1>>n2);

    printf("\n \t---------- INVERTER N�MERO ----------\t \n");
    printf(" Digite um n�mero inteiro positivo de tr�s digitos: "); fgets(n3, 4, stdin); fflush(stdin);
    printf(" N�mero invertido:%s",strrev(n3));
    printf(" \n");

    printf("\n \t---- MIN�SCULA PARA MIN�SCULA   ----\t \n");
    printf(" Digite uma letra mai�scula: "); fgets(l, 2, stdin);
    printf(" Letra min�scula: %s\n", strupr(l));


    printf("\n \n");

return 0;

}
