#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   float base, altura, area;
  printf("Insira o valor da BASE \n");
  scanf("%f", &base);
  printf("Insira o valor para a ALTURA \n");
  scanf("%f", &altura);
  area = (base*altura)/2;

  printf("A área do triângulo = %.2f", area);
  return 0;
}
