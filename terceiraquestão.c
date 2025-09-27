#include <stdio.h> 

int main(){ 
    int x; 

    printf("Digite um valor inteiro x: "); 
    scanf("%d", &x); 

    printf("\n --- Resultados --- \n"); 

    printf("O triplo de %d é: %d\n", x, x * 3); 

    printf("O quadrado de %d é: %d\n", x, x * x); 

    printf("A metade de %d é: %.2f\n", x, (float)x / 2.0); 

    return 0; 
}