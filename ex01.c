#include <stdio.h>

int main (){
    int salariMinimo, salarioBrutoFuncionario;

    printf("Digite o valor do salario minimo: ");
    scanf("%d", &salariMinimo);
    printf("Digite o valor do salario bruto do funcionario: ");
    scanf("%d", &salarioBrutoFuncionario);

    printf("O salario do funcionario equivale a %.2f salarios minimos", (float)salarioBrutoFuncionario / salariMinimo);
    getchar();
    return 0;
}