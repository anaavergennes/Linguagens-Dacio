#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int opcao;

    printf("\n========== MENU ==========\n");
    printf("1 - Exercício 1\n");
    printf("2 - Exercício 2\n");
    printf("3 - Exercício 3\n");
    printf("4 - Exercício 4\n");
    printf("5 - Exercício 5\n");
    printf("6 - Exercício 6\n");
    printf("7 - Exercício 7\n");
    printf("8 - Exercício 8\n");
    printf("==========================\n");

    printf("Escolha o exercício: ");
    scanf("%d", &opcao);

    switch (opcao) {

        // EXERCÍCIO 1
        case 1: {
            int num1, num2;

            printf("Insira número 1: ");
            scanf("%d", &num1);

            printf("Insira número 2: ");
            scanf("%d", &num2);

            printf("Os números são: %d e %d\n", num2, num1);

            break;
        }


        // EXERCÍCIO 2
        case 2: {
            double valor;
            int expoente = 0;

            printf("\nDigite um valor: ");
            scanf("%lf", &valor);

            while (valor >= 10) {
                valor = valor / 10;
                expoente = expoente + 1;
            }

            while (valor < 1) {
                valor = valor * 10;
                expoente = expoente - 1;
            }

            printf("%.4lf x 10^%d\n", valor, expoente);

            break;
        }


        // EXERCÍCIO 3
        case 3: {
            int numeroBinario;

            printf("\nDigite um numero: ");
            scanf("%d", &numeroBinario);

            printf("Em binario: ");
            printf("%d", numeroBinario / 64);
            printf("%d", (numeroBinario % 64) / 32);
            printf("%d", (numeroBinario % 32) / 16);
            printf("%d", (numeroBinario % 16) / 8);
            printf("%d", (numeroBinario % 8) / 4);
            printf("%d", (numeroBinario % 4) / 2);
            printf("%d\n", numeroBinario % 2);

            break;
        }


        // EXERCÍCIO 4
        case 4: {
            double salario, vendas, total;

            printf("\nDigite o salario fixo: ");
            scanf("%lf", &salario);

            printf("Digite o valor total em vendas: ");
            scanf("%lf", &vendas);

            total = salario + (vendas * 0.15);

            printf("TOTAL = R$ %.2lf\n", total);

            break;
        }


        // EXERCÍCIO 5
        case 5: {
            double a, b, c, d;
            double soma, media, produto;

            printf("\nDigite o primeiro valor: ");
            scanf("%lf", &a);

            printf("Digite o segundo valor: ");
            scanf("%lf", &b);

            printf("Digite o terceiro valor: ");
            scanf("%lf", &c);

            printf("Digite o quarto valor: ");
            scanf("%lf", &d);

            soma = a + b + c + d;
            media = soma / 4;
            produto = a * b * c * d;

            printf("Soma = %.2lf\n", soma);
            printf("Media = %.2lf\n", media);
            printf("Produto = %.2lf\n", produto);

            break;
        }


        // EXERCÍCIO 6
        case 6: {
            int idade, anos, meses, dias;

            printf("\nDigite a idade em dias: ");
            scanf("%d", &idade);

            anos = idade / 365;
            meses = (idade % 365) / 30;
            dias = (idade % 365) % 30;

            printf("%d ano(s)\n", anos);
            printf("%d mes(es)\n", meses);
            printf("%d dia(s)\n", dias);

            break;
        }


        // EXERCÍCIO 7
        case 7: {
            double raio, volume;
            double pi = 3.14159;

            printf("\nDigite o raio: ");
            scanf("%lf", &raio);

            volume = (4.0 / 3.0) * pi * pow(raio, 3);

            printf("Volume = %.3lf\n", volume);

            break;
        }


        // EXERCÍCIO 8
        case 8: {
            int x1, y1, x2, y2;
            float dist, cat1, cat2;

            printf("\nEntre com os valores para p1 (x1,y1):\n");
            scanf("%d", &x1);
            scanf("%d", &y1);

            printf("Entre com os valores para p2 (x2,y2):\n");
            scanf("%d", &x2);
            scanf("%d", &y2);

            cat1 = pow((x2 - x1), 2);
            cat2 = pow((y2 - y1), 2);

            dist = sqrt(cat1 + cat2);

            printf("Distancia: %f\n", dist);

            break;
        }


        default:
            printf("Exercicio invalido!\n");
    }

    return 0;
}
