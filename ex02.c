#include <stdio.h>

int main (){
    int hora;

    printf("Digite que horas são: ");
    scanf("%d", &hora);

    printf("Desde o início do dia se passaram %d minutos", hora * 60);
    getchar();
    return 0;
}