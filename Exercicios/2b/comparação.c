#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b){
	if(a < b)return b;
	else return a;
	
}

int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("vamos ler os valores: \n");
	//for(inicialização; verificação; incremento)
	for( i=1; i<10; i++){
	scanf("%d", &valores[i]);	
}
printf("\n");
for ( i=9; i>=1; i--){
	printf("|%d|", valores[i]);
}
	return 0;
}
