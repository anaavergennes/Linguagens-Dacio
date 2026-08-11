#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592  // sempre que encontrar o "pi" ele colocará esse valor.

int main(int argc, char *argv[]) {
	
	float r, area;  //serão números com vírgula
	
	printf("Insira o raio R do circulo \n ");
	scanf("%f", &r);    // aqui ele lê o que o usuário vai colocar, está guardado no endereço de r
	
	area = pi * (r*r);
	
	printf (" A area do circulo de raio R %f = %f", r, area);
	return 0;
}
