#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n,n1, n2;
    char n3[4];
    char l[2];

    printf("\n \t---------- COMPLEMENTO BIT A BIT ----------\t \n");
    printf(" Digite um número inteiro: "); scanf("%d", &n);
    printf(" Complemento do número é %d\n", ~n);

    printf("\n \t---------- DESLOCAMENTO DO 1º PELO 2º ----------\t ");
    printf("\n Digite um número inteiro: "); scanf("%d", &n1); fflush(stdin);
    printf(" Digite outro número inteiro: "); scanf("%d", &n2); fflush(stdin);
    printf(" Esquerda: %d \n Direita %d\n", n1<<n2, n1>>n2);

    printf("\n \t---------- INVERTER NÚMERO ----------\t \n");
    printf(" Digite um número inteiro positivo de três digitos: "); fgets(n3, 4, stdin); fflush(stdin);
    printf(" Número invertido:%s",strrev(n3));
    printf(" \n");

    printf("\n \t---- MINÚSCULA PARA MINÚSCULA   ----\t \n");
    printf(" Digite uma letra maiúscula: "); fgets(l, 2, stdin);
    printf(" Letra minúscula: %s\n", strupr(l));


    printf("\n \n");

return 0;

}
