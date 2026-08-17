#include <stdio.h>
#include <stdlib.h>

 int main()
{
    /*
    
    EXERCICIO 1

    int n1,n2;
    
    scanf("%d %d",&n1,&n2);
    printf("inverso: %d %d ",n2,n1);
    return 0;
    */
    
    
    /*
    EXERCICIO 2

    double valor;
    
    scanf("%lf",&valor);
    
    printf("valor em notaçao cientifica: %e",valor);
    return 0;
    */
    
    
    /*
    
    EXERCICIO 3

   int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;
   
    printf("Valor de N:  ");
    scanf("%d", &n);
    
    bit64 = n%2;
    resultado = n/2;
    
    bit32 = resultado%2;
    resultado = resultado/2;
    
    bit16 = resultado%2;
    resultado = resultado/2;
    
    bit8 = resultado%2;
    resultado = resultado/2;
    
    bit4 = resultado%2;
    resultado = resultado/2;
    
    bit2 = resultado%2;
    resultado = resultado/2;
    
    
    printf("O numero %d em binario = %d%d%d%d%d%d%d%", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64);
  
	return 0;
}
    
  
/*
 EXERCICIO 4, URI 1009
 
 char NOME[50];
 double salario_fixo,valor_total_vendas;
 
 
    scanf("%s",&NOME);
   
   scanf("%lf",&salario_fixo);
   
   scanf("%lf",&valor_total_vendas);
   
   double valor_total_salario = valor_total_vendas * 0.15 + salario_fixo;
   
   printf("TOTAL = R$ %.2lf\n",valor_total_salario);
   
 
    return 0;
*/

/* 

EXERCICIO 5

double a,b,c,d;

printf("Digite 4 valores: \n");
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
printf("A soma dos 4 valores e: %.1lf \n",a + b + c + d);
printf("A media dos 4 valores e: %.1lf \n",(a + b + c + d) / 4);
printf("A produtorio dos 4 valores e: %.1lf \n",a * b * c * d);

return 0;


*/    


/*


    EXERCICIO 6, URI 1020

int total_dias, anos, meses, dias, resto;
    
    
    scanf("%d", &total_dias);
    
    
    anos = total_dias / 365;
    resto = total_dias % 365;
    
    
    meses = resto / 30;
    dias = resto % 30;
    
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;

  */
 
  /*

    EXERCICIO 7, URI 1011

   double pi = 3.14159;
   double raio;
   
   scanf("%lf",&raio);
   
   double volume = (4.0 / 3.0) * pi * raio * raio * raio;
   
   printf("VOLUME = %.3lf\n",volume);
 
    return 0;
  
    */

    
    /*

    EXERCICIO 8
	
#include <math.h>

   int x1, x2, y1, y2;
   float dist, cat1, cat2;
    
   printf("Entre com os valores para p1(x1,y1)");
   scanf("%d", &x1);
   scanf("%d", &y1);

   printf("Entre com os valores para p2(x2,y2)");
   scanf("%d", &x2);
   scanf("%d", &y2);

   cat1 = pow((x2-x1), 2);
   cat2 = pow((y2-y1), 2);

   dist = sqrt((cat1+cat2), 2);

   printf("Distancia: %f", dist);
    
    return 0;

}

    */

}
