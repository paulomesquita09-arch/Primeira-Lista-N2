#include <stdio.h>  
 
int main(){ 
    char origem[100], destino[100]; 
    char *pOrigem = origem; 
    char *pDestino = destino; 

    printf("Digite uma string: "); 
    fgets(origem, 100, stdin); 

    while(*pOrigem != '\0'){ 
        *pOrigem = *pDestino;
        pOrigem++; 
        pDestino++;
    }

    *pDestino = '\0';

    printf("String Original: %s", origem);
    printf("String Copiada: %s", destino);


    return 0;
}