#include <stdio.h>

void calcularIMC (float peso, float altura) {
    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f.\n", peso, altura, imc);
    return 0;
}

int main (){
    float peso, altura;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    calcularIMC(peso, altura);


    getchar();
    return 0;
}