#include <stdio.h>

int main()
{
    printf("Exercicio 1\n");
    int primeiro;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiro);
    int segundo;
    printf("Digite o segundo numero: \n");
    scanf("%d", &segundo);
    int x = primeiro + segundo;
    printf("O resultado da soma é %d!", x);
}