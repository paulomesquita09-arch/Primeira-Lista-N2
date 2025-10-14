#include <stdio.h> 

int main(){ 
int numero, inverso; 
int unidade, dezena, centena;

printf("Digite um número de três dígitos: "); 
scanf("%d", &numero); 

if(numero < 100 || numero > 999 ){ 
    printf("Entrada Inválida! Digite um número de três algarismos.\n"); 
    return 1;
} 

unidade = numero % 10; 
dezena = (numero / 10) % 10; 
centena = numero / 100; 

inverso = unidade * 100 + dezena * 10 + centena; 

printf("O número invertido é: %d\n", inverso);

return 0;

}