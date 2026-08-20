#include <stdio.h>

int main (){
    int nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    printf("A média das notas é: %.2f", (float)(nota1 + nota2 + nota3) / 3);
    getchar();
    return 0;
}