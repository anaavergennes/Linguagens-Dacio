#include <stdio.h>

int main() {

    int cpf[11];
    int soma;
    int resto;
    int digito1;
    int digito2;

    printf("Digite os 11 numeros do CPF: ");
    
    int i;

    for (i = 0; i < 11; i++) {
        scanf("%1d", &cpf[i]);
    }

    // Primeiro digito
    soma = 0;

    for (i = 0; i < 9; i++) {
        soma = soma + cpf[i] * (10 - i);
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito1 = 0;
    } else {
        digito1 = resto;
    }

    // Segundo digito
    soma = 0;

    for (i = 0; i < 10; i++) {
        soma = soma + cpf[i] * (11 - i);
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito2 = 0;
    } else {
        digito2 = resto;
    }

    //  CPF é válido
    if (digito1 == cpf[9] && digito2 == cpf[10]) {
        printf("CPF Valido!\n");
    } else {
        printf("CPF Invalido!\n");
    }

    return 0;
}
