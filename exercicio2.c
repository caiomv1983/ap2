#include <stdio.h>

void main() {
  int peso;
  float altura, imc;

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso);

  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O IMC de uma pessoa com o peso %d e a altura de %f é", imc \n);
