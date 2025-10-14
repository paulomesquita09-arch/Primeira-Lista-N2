#include <stdio.h> 

int main(){ 
int num, suc, ant; 

printf("Digite um número inteiro: "); 
scanf("%d", &num); 

suc = num + 1; 

ant = num - 1; 

printf("O número %d possui como antecessor, o número %d e o número %d, como sucessor", num, ant, suc);
}