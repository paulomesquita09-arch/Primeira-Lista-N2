#include <stdio.h> 

int main(){ 
    int *ptr1, *ptr2, *ptrsoma; 
    int n1, n2, soma;  

    ptr1 = &n1; 
    ptr2 = &n2; 
    ptrsoma = &soma;
    
    printf("Digite um número: "); 
    scanf("%d", ptr1);

    printf("Digite outro número: "); 
    scanf("%d", ptr2);  

    *ptrsoma = *ptr1 + *ptr2; 

    printf("\nO valor da soma é igual a: %d\n", *ptrsoma); 
    
    printf("O endereço onde a soma está armazenada e: %p\n", (void *)ptrsoma);


    return 0;
}