#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
float  h,B,b, trapezio;
		printf("Insira a altura(h) \n ");
	    scanf("%f", &h);
	    
	    printf("Insira a base menor(b) \n ");
	    scanf("%f", &b);
	    
	    printf("Insira a base maior(B) \n ");
	    scanf("%f", &B);
	    
	    trapezio =  (B+b) *h /2;
	
	 printf("A area do trapezio = %.2f\n", trapezio); // %f ? mostra um número decimal (float).
                                                    // .2 ? mostra apenas 2 casas depois da vírgula.
                                                    // esse \n é para pular linha só.
	return 0;
}

