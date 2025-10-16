#include <stdio.h> 

int main(){ 
int num, i;
long long fatorial = 1;

printf("Escreva um número inteiro positivo: ");
scanf("%d", &num); 

if (num < 0) { 
    printf("Número Inválido, o fatorial não está definido para números negativos.\n");
} else { 
    for (i = 1; i <= num; i++){ 
        fatorial*= i;
}   
    
    printf("O fatorial de %d é: %lld\n", num, fatorial); 

}

    return 0;
}
