#include <stdio.h>

int main (){
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    int soma = n1 + n2;
    int sub = n1 - n2;
    int div = n1 / n2;
    int mult = n1 * n2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Divisão: %d\n", div);
    printf("Multiplicação: %d\n", mult);
    getchar();
    return 0;
}