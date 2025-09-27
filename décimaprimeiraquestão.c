#include <stdio.h> 

int main(){ 
int p1, p2, soma, produto, dif, quociente, resto;  

printf("Digite o primeiro número: "); 
scanf("%d", &p1);

printf("Digite o segundo número: "); 
scanf("%d", &p2); 

soma = p1 + p2; 
produto = p1 * p2; 
dif = p1 - p2; 
quociente = p1 / p2; 
resto = p1 % p2; 

printf("Soma : %d.\n", soma);
printf("Dif : %d.\n", dif); 
printf("Produto : %d.\n", produto);
printf("Resto : %d.\n", resto); 
printf("Quociente : %d.\n");

    return 0;
}