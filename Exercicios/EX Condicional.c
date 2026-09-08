// EXERCICIO AULA
#include <stdio.h>
#include <stdlib.h>

/* Crie um progama que receba uma letra, e verifique se ela é vogal ou constante, 
se ela for vogal, verifique se ela é 'a' ou 'o' caso seja mostre "aoba" caso seja 
'i' ou 'u' mostre 'lá ele'. Caso contrário mostre '67' */

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra:\n");
    scanf("%c", &letra);

    if (letra == 'a'|| letra == 'e'|| letra == 'i'|| letra == 'o' || letra == 'u' ) {
    	if (letra == 'a'|| letra == 'o'){
    		printf("Aoba\n");
		}
		if (letra == 'i'|| letra == 'u'){
    		printf("La ele\n");
    	}
    	
    }else{
    	print ("67");
    }
	return 0;
}

--------------------------------------------------------- Slide --------------------------------------------------------------------
// EXERCÍCIO 1
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("O inverso e: %.2f\n", 1.0 / n);
    } else {
        printf("O quadrado e: %d\n", n * n);
    }

    return 0;
}

// EXERCÍCIO 2
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    return 0;
}

// EXERCÍCIO 3
#include <stdio.h>
#include <math.h>

int main() {
    int n, raiz;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n >= 0) {
        raiz = sqrt(n);

        if (raiz * raiz == n) {
            printf("E um quadrado perfeito.\n");
            printf("Sua raiz e: %d\n", raiz);
        } else {
            printf("Nao e um quadrado perfeito.\n");
        }
    } else {
        printf("Nao e um quadrado perfeito.\n");
    }

    return 0;
}

// EXERCÍCIO 4
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char letra;
	
	printf("Insira uma letra: ");
	scanf("%c", &letra);

	switch (letra) {

		case 'a':
			printf("A de AMOR");
			break;

		case 'b':
			printf("B de BAIXINHO");
			break;

		case 'c':
			printf("C de CORACAO");
			break;

		case 'd':
			printf("D de DOCINHO");
			break;

		case 'e':
			printf("E de ESCOLA");
			break;

		case 'f':
			printf("F de FEIJAO");
			break;

		case 'g':
			printf("G de GENTE");
			break;

		case 'h':
			printf("H de HUMANO");
			break;

		case 'i':
			printf("I de IGUALDADE");
			break;

		case 'j':
			printf("J de JUVENTUDE");
			break;

		case 'l':
			printf("L de LIBERDADE");
			break;

		case 'm':
			printf("M de MOLECAGEM");
			break;

		case 'n':
			printf("N de NATUREZA");
			break;

		case 'o':
			printf("O de OBRIGADO");
			break;

		case 'p':
			printf("P de PROTECAO");
			break;

		case 'q':
			printf("Q de QUERO-QUERO");
			break;

		case 'r':
			printf("R de RIACHO");
			break;

		case 's':
			printf("S de SAUDADE");
			break;

		case 't':
			printf("T de TERRA");
			break;

		case 'u':
			printf("U de UNIVERSO");
			break;

		case 'v':
			printf("V de VITORIA");
			break;

		case 'x':
			printf("X o que que e? E XUXA");
			break;

		case 'z':
			printf("Z e ZUM, ZUM, ZUM, ZUM, ZUM");
			break;

		default:
			printf("Letra invalida!");
	}

	return 0;
}
