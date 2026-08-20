#include <stdio.h>

void verificar_triangulo (float l1, float l2, float l3) {
    if (l1 + l2 < l3 || l1 + l3 < l2 || l2 + l3 < l1) {
        exibir_resultado(0);
    }

    else {
        exibir_resultado(1);
    }
    return 0;
}

void exibir_resultado(int res) {
    if (res == 0) {
        printf("Não é um triângulo.");
    }

    else if (res == 1) {
        printf("É um triângulo.");
    }
}


int main (){
    float l1, l2, l3;

    printf("Digite o lado 1: ");
    scanf("%f", &l1);
    printf("Digite o lado 2: ");
    scanf("%f", &l2);
    printf("Digite o lado 3: ");
    scanf("%f", &l3);
   

    verificar_triangulo(l1, l2, l3);


    getchar();
    return 0;
}