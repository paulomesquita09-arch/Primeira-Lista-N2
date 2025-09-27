#include <stdio.h> 

int main(){ 
float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros): ");
    if (scanf("%f", &altura) != 1) {
        printf("Entrada inválida para altura.\n");
        return 1;
    }
    while (getchar() != '\n');

    printf("Digite o sexo (M para masculino, F para feminino): ");
    if (scanf("%c", &sexo) != 1) {
        printf("Entrada inválida para sexo.\n");
        return 1;
    }

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido. Use M ou F.\n");
        return 1;
    }

    printf("O peso ideal é: %.2f kg\n", pesoIdeal);

    return 0;
}