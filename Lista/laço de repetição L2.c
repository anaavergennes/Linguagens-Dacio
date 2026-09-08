#include <stdio.h>
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
    printf("9 - Exercício 9\n");
    printf("10 - Exercício 10\n");
    printf("==========================\n");

    printf("Escolha o exercício: ");
    scanf("%d", &opcao);

    switch (opcao) {

        // EXERCÍCIO 1
        case 1: {
            int idade, ano_atual, calculo;

            printf("Insira a sua idade: ");
            scanf("%d", &idade);

            printf("Insira o ano atual: ");
            scanf("%d", &ano_atual);

            calculo = ano_atual - idade;

            printf("O ano de nascimento = %.4d\n", calculo);

            break;
        }


        // EXERCÍCIO 2
        case 2: {
            double k, m;

            printf("Insira a velocidade em Km/h: ");
            scanf("%lf", &k);

            m = k / 3.6;

            printf("A velocidade em m/s = %.4lf\n", m);

            break;
        }


        // EXERCÍCIO 3
        case 3: {
            double reais, dolar;

            printf("Digite o valor em reais: ");
            scanf("%lf", &reais);

            dolar = reais / 5.22;

            printf("O valor em dólar é = US$ %.2lf\n", dolar);

            break;
        }


        // EXERCÍCIO 4
        case 4: {
            double c, f;

            printf("Digite a temperatura em °C: ");
            scanf("%lf", &c);

            f = (c * 9.0 / 5.0) + 32;

            printf("A temperatura em Fahrenheit = %.2lf °F\n", f);

            break;
        }


        // EXERCÍCIO 5
        case 5: {
            double g, r;
            double pi = 3.141592;

            printf("Digite o ângulo em graus: ");
            scanf("%lf", &g);

            r = (g * pi) / 180;

            printf("Em radianos é = %.2lf\n", r);

            break;
        }


        // EXERCÍCIO 6
        case 6: {
            int num, ant, suc;

            printf("Digite o número: ");
            scanf("%d", &num);

            ant = num - 1;
            suc = num + 1;

            printf("O antecessor = %d | O sucessor = %d \n", ant, suc);

            break;
        }


        // EXERCÍCIO 7
        case 7: {
            double g1, g2, g3;
            double valor = 780000.00;

            g1 = valor * 0.46;
            g2 = valor * 0.32;
            g3 = valor - g1 - g2;

            printf("O valor do primeiro ganhador = %.2lf\n", g1);
            printf("O valor do segundo ganhador = %.2lf\n", g2);
            printf("O valor do terceiro ganhador = %.2lf\n", g3);

            break;
        }


        // EXERCÍCIO 8
        case 8: {
            int tempo, horas, minutos, segundos;

            printf("Digite o tempo em segundos: ");
            scanf("%d", &tempo);

            horas = tempo / 3600;
            minutos = (tempo % 3600) / 60;
            segundos = tempo % 60;

            printf("%02d:%02d:%02d\n", horas, minutos, segundos);

            break;
        }


        // EXERCÍCIO 9
        case 9: {
            double tempo, velocidade, distancia, litros;

            printf("Digite o tempo da viagem em horas: ");
            scanf("%lf", &tempo);

            printf("Digite a velocidade media em km/h: ");
            scanf("%lf", &velocidade);

            distancia = tempo * velocidade;
            litros = distancia / 12;

            printf("Litros gastos = %.3lf\n", litros);

            break;
        }


        // EXERCÍCIO 10
        case 10: {
            int a, b, c, maiorAB, maior;

            printf("Digite o primeiro valor: ");
            scanf("%d", &a);

            printf("Digite o segundo valor: ");
            scanf("%d", &b);

            printf("Digite o terceiro valor: ");
            scanf("%d", &c);

            maiorAB = (a + b + abs(a - b)) / 2;

            maior = (maiorAB + c + abs(maiorAB - c)) / 2;

            printf("%d O número maior: \n", maior);

            break;
        }


        default:
            printf("Exercicio invalido!\n");
    }

    return 0;
}
