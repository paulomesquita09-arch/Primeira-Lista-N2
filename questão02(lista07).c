#include <stdio.h>

struct estoque{ 
    char nomePeca[50]; 
    int numpeca; 
    double preco; 
    int numpedido;

}; 

int main(){ 
    struct estoque e; 
    
    printf("Digite o nome da peça: "); 
    scanf("%49s", e.nomePeca); 

    printf("Digite o número da peça: "); 
    scanf("%d", e.numpeca); 

    printf("Digite o preço da peça: "); 
    scanf("%lf", e.preco); 

    printf("Digite o número do pedido: "); 
    scanf("%d", e.numpedido); 

    printf("\n=== Dados Cadastrados ===\n");

    printf("O nome da peça: %s\n", e.nomePeca); 
    printf("O número da peça: %d\n", e.numpeca); 
    printf("O preço da peça: %.2lf\n", e.preco); 
    printf("Número do pedido: %d\n", e.numpedido);


    return 0;
}