#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void verificacao(int valor, int sorteado) {
    if (valor == sorteado) {
        printf("Parabéns!!! Você acertou!");
    }

    else if (valor < sorteado) {
        printf("Você chutou muito baixo! O valor correto é %d.", sorteado);
    }
    
    else {
        printf("Você chutou muito alto! O valor correto é %d.", sorteado);
    }
}

int sortear() {
    int sorteado;

    srand(time(NULL));
    sorteado = (rand() % 100) + 1;

    return sorteado;
}

int main(void) {
    int sorteado = sortear();
    int valor;

    do {
        printf("Digite o palpite(1 a 100): ");
        scanf("%d", &valor);
    } while (valor < 1 || valor > 100);

    verificacao(valor, sorteado);

    return 0;
}