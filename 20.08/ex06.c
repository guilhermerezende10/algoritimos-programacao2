#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void verificacao(int valor, int sorteado, int tentativas) {
    if (valor == sorteado) {
        printf("Parabéns! Você acertou após %d tentativas.", tentativas);
    }

    else if (valor < sorteado) {
        printf("Você chutou muito baixo!");
    }
    else {
        printf("Você chutou muito alto!");
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
    int tentativas = 1;

    do {
        printf("Digite o palpite(1 a 100): ");
        scanf("%d", &valor);
    } while (valor < 1 || valor > 100);

    
    do {
        if (valor != sorteado) {
            do {
                tentativas += 1;
                verificacao(valor, sorteado, tentativas);
                printf("\nDigite o palpite(1 a 100): ");
                scanf("%d", &valor);
            } while (valor < 1 || valor > 100);
        }
    } while (valor != sorteado);

    verificacao(valor, sorteado, tentativas);

    return 0;
}