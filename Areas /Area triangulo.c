#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int base, altura;
	float area;
	
	base = 10;
	altura = 20;
	
	area = (base*altura)/2;
	
	printf("A area do Triangulo Retangulo de Base = %d e altura = %d e %.1f", base, altura, area);
	
	return 0;
}

OUTRO JEITO DE FAZER 

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
