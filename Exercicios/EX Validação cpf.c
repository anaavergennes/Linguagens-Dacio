#include <stdio.h>

int main() {

    int cpf[11];
    int soma;
    int resto;
    int digito1;
    int digito2;

    printf("Digite os 11 numeros do CPF: ");

    for (int i = 0; i < 11; i++) {
        scanf("%1d", &cpf[i]);
    }

    // Calculando o primeiro digito
    soma = 0;

    for (int i = 0; i < 9; i++) {
        soma = soma + cpf[i] * (10 - i);
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito1 = 0;
    } else {
        digito1 = resto;
    }

    // Calculando o segundo digito
    soma = 0;

    for (int i = 0; i < 10; i++) {
        soma = soma + cpf[i] * (11 - i);
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito2 = 0;
    } else {
        digito2 = resto;
    }

    // Verificando se o CPF é válido
    if (digito1 == cpf[9] && digito2 == cpf[10]) {
        printf("CPF Valido!\n");
    } else {
        printf("CPF Invalido!\n");
    }

    return 0;
}
