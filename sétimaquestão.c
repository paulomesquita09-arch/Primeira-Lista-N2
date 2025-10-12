#include <stdio.h> 

int main(){ 
    int num, quadrado; 

    printf("Digite um número inteiro: "); 
    scanf("%d", &num); 

    quadrado = num * num;

    printf("O número %d elevado ao quadrado é igual a %d\n", num, quadrado);

    return 0; 

}