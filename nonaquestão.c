#include <stdio.h> 

int main(){ 
float comprimento, volume, altura, largura; 

printf("Digite o comprimento: "); 
scanf("%f", &comprimento); 

printf("Digite a altura: "); 
scanf("%f", &altura); 

printf("Digite a largura: "); 
scanf("%f", &largura); 

volume = comprimento * altura * largura; 

printf("O volume é igual a : %.2f\n", volume);

    return 0;    
}