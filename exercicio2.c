#include <stdio.h>

int main()
{
    printf("Exercicio 2\n");
    int peso;
    printf("Digite o seu Peso: \n");
    scanf("%d", &peso);
    int altura;
    printf("Digite sua altura: \n");
    scanf("%d", &altura);
    int x = peso / altura;
    printf("O IMC de uma pessoa com o peso e a altura é %d!", x);
}