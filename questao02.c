#include <stdio.h> 

int main(){ 
int d; 

do {
printf("Digite um valor de 1 a 7: "); 
scanf("%d", &d); 

if (d == 1){
    printf("Domingo\n");
} else if (d == 2){ 
    printf("Segunda Feira\n");
} else if (d == 3){ 
    printf("Terça Feira\n");
} else if (d == 4){ 
    printf("Quarta Feira\n"); 
} else if (d == 5){ 
    printf("Quinta Feira\n");
} else if (d == 6){ 
    printf("Sexta Feira\n");
} else if (d == 7){ 
    printf("Sábado\n");
} else if (d != 0) {
    printf("Número de dia não válido\n");
}

    } while (d != 0);

    printf("Programa encerrado!\n");

    return 0;
}