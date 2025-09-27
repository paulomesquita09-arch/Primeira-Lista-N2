#include <stdio.h> 

int main(){ 
int x, n;  
double produto;

printf("Digite um valor x: "); 
scanf("%d", &x);

printf("Digite um valor n: ");
scanf("%d", &n); 

produto = x * pow(2, n); 

printf("O produto é igual a: %.2f\n", produto);

    return 0;
}