#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, d;
	
	printf("Escreva 4 valores: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%d, %d, %d, %d", b, d, a, c);
	
	return 0;
}
