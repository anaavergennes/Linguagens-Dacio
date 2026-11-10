#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float notas[10];
	int i;
	int aluno;
	
	for (i = 0; i < 10; i++){
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%f", &notas[i]);
	}
		printf("Qual aluno deseja consultar? (1 a 10): ");
		scanf("%d", &aluno);
		
		if (aluno >= 1 && aluno <= 10){
			printf("Nota do aluno %d: %.2f\n", aluno, notas[aluno - 1]);
		} else{
			printf("Aluno invalido. \n");
		}
	return 0;
}
