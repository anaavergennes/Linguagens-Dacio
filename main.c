#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float base,altura,area;
	
	printf("Insira o valor da BASE \n");
	scanf("%f", &base);
	printf("Insira o valor da ALTURA \n");
	scanf("%f", &altura);
	area = base * altura / 2.0;
	printf("A area do tringulo e: %.2f \n", area);
	return 0;
}
