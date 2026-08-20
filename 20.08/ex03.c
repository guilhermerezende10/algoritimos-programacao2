#include <stdio.h>

void aprovacao (float nota, int frequencia) {
    if (frequencia < 75) {
        printf("Reprovado");
    }

    else if (nota >= 7.5) {
        printf("Aprovado");
    }

    else {
        printf("De exame");
    }
    return 0;
}

int main (){
    float nota;
    int frequencia;

    printf("Digite o nota: ");
    scanf("%f", &nota);
    printf("Digite a frequencia: ");
    scanf("%d", &frequencia);

    aprovacao(nota, frequencia);


    getchar();
    return 0;
}