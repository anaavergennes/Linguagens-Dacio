#include <stdio.h>
#include <stdlib.h>

int main(){

/*

EXERCICIO 1

int idade,ano,ano_nascimento;

    printf("Qual sua idade: ");
    scanf("%d",&idade);

    printf("Ano atual: ");
    scanf("%d",&ano);

ano_nascimento = ano - idade;

printf("Seu ano de nascimento e: %d",ano_nascimento);

return 0;

*/


/*

EXERCICIO 2 

int km;
double mts;
printf("velocidade em km/h: ");
scanf("%d",&km);

mts = km / 3.6;

printf("%.2lf",mts);


return 0;

*/

/*EXERCICIO 3

double mbrl,mdol,datual;
datual = 5.22;

printf("Valor em reais: ");
scanf("%lf",&mbrl);

mdol = mbrl / datual;

printf("Valor em dolares: %.2lf",mdol);

return 0;

*/

/* EXERCICIO 4 
double tCelsius,tFahrenheit;

printf("Temperatura em celsius: ");
scanf("%lf",&tCelsius);

tFahrenheit = tCelsius * (9.0 / 5.0) + 32.0;

printf("Temperatura em Fahrenheit: %.1lf",tFahrenheit);

return 0;


*/

/* EXERCICIO 5

double graus,radianos,pi;

pi = 3.141592;

printf("Angulo em graus: ");
scanf("%lf",&graus);

radianos = graus * (pi/180);

printf("Angulo em radianos: %.2lf",radianos);


return 0;

*/


/* EXERCICIO 6

int inte;


printf("Digite um numero inteiro: ");
scanf("%d",&inte);

printf("Antecessor: %d, Sucessor: %d ", inte - 1,inte + 1);


return 0;

*/

/* EXERCICIO 7 
double importancia = 780.000;

printf("o primeiro recebera: %.3lf \n o segundo recebera: %.3lf \n o terceiro recebera: %.3lf",importancia * 0.48,importancia * 0.32, importancia * 0.20);


return 0;
*/

/* 

EXERCICIO 8

    int n, horas, minutos, segundos, resto;

    scanf("%d", &n);

    horas = n / 3600;
    resto = n % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
*/

/* EXERCICIO 9 

int tempo, velocidade, distancia;
    double litros;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("%.3lf\n", litros);

    return 0;

*/

/*
EXERCICIO 10

int a, b, c, maiorAB;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maiorAB = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorAB);

    return 0;
    
*/




}
