#include <stdio.h> 

int main(){  
    float conta, total; 

    printf("Digite o valor da conta do restaurante: "); 
    scanf("%f", &conta); 

    total = conta + (conta * 0.10);

    printf("O valor total com a taxa do garçom (10%%) e: R$ %.2f\n", total);

    return 0;
}