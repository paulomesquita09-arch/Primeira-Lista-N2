#include <stdio.h> 

int main(){ 
int dia; 

printf("Digite um número de 1 a 7 para o dia da semana (0 para sair): "); 

while(1){ 
scanf("%d", &dia); 

if (dia == 0){ 
    printf("Encerrando o programa ...\n"); 
    break;
} 

switch(dia){ 
case 1: printf("Domingo\n"); break; 
case 2: printf("Segunda Feira\n"); break; 
case 3: printf("Terça Feira\n"); break; 
case 4: printf("Quarta Feira\n"); break;
case 5: printf("Quinta Feira\n"); break; 
case 6: printf("Sexta Feira\n"); break;
case 7: printf("Sábado\n"); break; 
}


printf("\nDigite outro número (0 para sair): "); 
}

    return 0;
} 