#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b){
	if(a > b)return a;
	else return b;
	}
int comparaMenor (int a, int b){
	if(a < b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("vamos ler os valores: \n");
	//for(inicialização; verificação; incremento)
	for( i=0; i<10; i++){
	scanf("%d", &valores[i]);	
}

	maior = valores[0];
	for(i=1; i<5; i+=2){
		int maior_temp = comparaMaior(valores[i],valores[i+1]);
		maior = comparaMaior(maior_temp, maior);
	}
	
	menor = valores[5];
	for(i=6; i<9; i+=2){
		int menor_temp = comparaMenor(valores[i], valores [i+1]);
		menor = comparaMenor(menor_temp, menor);
		
	}
	printf("\n");
	printf("maior |%d|", maior);

	printf("\n");
	printf("menor |%d|", menor);
	return 0;
}
