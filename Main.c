#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor1, valor2, soma, subtracao, multiplicacao, divisao;

    printf("=== Calculadora Simples ===\n\n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;

    printf("\n=== Resultados ===\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    if (valor2 != 0) {
        divisao = valor1 / valor2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: Nao e possivel dividir por zero.\n");
    }

    printf("\n=============================\n");
    printf(" Feito por Willian Duraes :)  \n");
    printf("=============================\n");

    return 0;
}