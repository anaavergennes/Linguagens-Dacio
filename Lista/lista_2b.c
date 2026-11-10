#include <stdio.h>
#include <math.h>

/* Exercicio 1: ler, imprimir ao contrario e ordenar. */
void exercicio1(void) {
    int numeros[100];
    int i, j, auxiliar;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Ordem inversa da leitura:\n");
    for (i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    /* Compara dois numeros e troca se o da frente for maior. */
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[j] > numeros[i]) {
                auxiliar = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = auxiliar;
            }
        }
    }

    printf("\nDo maior para o menor:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

/* Exercicio 2: separar o numero em mantissa e expoente. */
void exercicio2(void) {
    double numero;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    while (numero <= 0) {
        printf("O numero precisa ser positivo. Digite novamente: ");
        scanf("%lf", &numero);
    }

    /* Divide ate o numero ficar menor que 10. */
    while (numero >= 10) {
        numero = numero / 10;
        expoente = expoente + 1;
    }

    /* Multiplica ate o numero ficar maior ou igual a 1. */
    while (numero < 1) {
        numero = numero * 10;
        expoente = expoente - 1;
    }

    printf("%.15g x 10^(%d)\n", numero, expoente);
}

/* Exercicio 3: os restos das divisoes por 2 formam o binario. */
void exercicio3(void) {
    int numero;
    int binario[7]; /* O numero 64 precisa de 7 digitos binarios. */
    int quantidade = 0;
    int i;

    printf("Digite um numero de 1 a 64: ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 64) {
        printf("Digite um numero de 1 a 64: ");
        scanf("%d", &numero);
    }

    while (numero > 0) {
        binario[quantidade] = numero % 2;
        quantidade = quantidade + 1;
        numero = numero / 2;
    }

    printf("Binario: ");
    for (i = quantidade - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");
}

/* Exercicio 4: aplicar a formula fornecida pelo professor. */
void exercicio4(void) {
    double numeros[10];
    double maior, diferenca;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    maior = numeros[0];

    for (i = 1; i < 10; i++) {
        diferenca = maior - numeros[i];

        /* O modulo transforma a diferenca negativa em positiva. */
        if (diferenca < 0) {
            diferenca = diferenca * -1;
        }

        maior = (maior + numeros[i] + diferenca) / 2;
    }

    printf("%g eh o maior\n", maior);
}

/* Exercicio 5: contar os divisores para verificar se e primo. */
void exercicio5(void) {
    int numeros[100];
    int i, divisor, quantidadeDivisores;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 100; i++) {
        printf("Numero %d: ", numeros[i]);

        if (numeros[i] % 2 == 0) {
            printf("par e ");
        } else {
            printf("impar e ");
        }

        quantidadeDivisores = 0;
        for (divisor = 1; divisor <= numeros[i]; divisor++) {
            if (numeros[i] % divisor == 0) {
                quantidadeDivisores = quantidadeDivisores + 1;
            }
        }

        /* Primos possuem exatamente dois divisores positivos. */
        if (quantidadeDivisores == 2) {
            printf("primo.\n");
        } else {
            printf("nao primo.\n");
        }
    }
}

/* Exercicio 6: cada posicao representa um par de pontos. */
void exercicio6(void) {
    double x1[10], y1[10], x2[10], y2[10];
    double diferencaX, diferencaY, distancia;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Par de pontos %d\n", i + 1);
        printf("Digite x1: ");
        scanf("%lf", &x1[i]);
        printf("Digite y1: ");
        scanf("%lf", &y1[i]);
        printf("Digite x2: ");
        scanf("%lf", &x2[i]);
        printf("Digite y2: ");
        scanf("%lf", &y2[i]);
    }

    for (i = 0; i < 10; i++) {
        diferencaX = x2[i] - x1[i];
        diferencaY = y2[i] - y1[i];
        distancia = sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
        printf("Distancia do par %d: %.2f\n", i + 1, distancia);
    }
}

/* Exercicio 7: procurar vizinhos que aumentam de 1 em 1. */
void exercicio7(void) {
    int numeros[100];
    int i;
    int dentroDaSequencia = 0;
    int encontrou = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 99; i++) {
        if (numeros[i + 1] - 1.0 == numeros[i]) {
            /* Imprime o primeiro numero somente no inicio. */
            if (dentroDaSequencia == 0) {
                printf("Sequencia: %d ", numeros[i]);
            }
            printf("%d ", numeros[i + 1]);
            dentroDaSequencia = 1;
            encontrou = 1;
        } else {
            if (dentroDaSequencia == 1) {
                printf("\n");
            }
            dentroDaSequencia = 0;
        }
    }

    if (dentroDaSequencia == 1) {
        printf("\n");
    }
    if (encontrou == 0) {
        printf("Nenhuma sequencia consecutiva encontrada.\n");
    }
}

/* O main chama as funcoes na ordem pedida na atividade. */
int main(void) {
    printf("\nEXERCICIO 1\n");
    exercicio1();

    printf("\nEXERCICIO 2\n");
    exercicio2();

    printf("\nEXERCICIO 3\n");
    exercicio3();

    printf("\nEXERCICIO 4\n");
    exercicio4();

    printf("\nEXERCICIO 5\n");
    exercicio5();

    printf("\nEXERCICIO 6\n");
    exercicio6();

    printf("\nEXERCICIO 7\n");
    exercicio7();

    return 0;
}
