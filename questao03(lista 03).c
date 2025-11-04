#include <stdio.h> 

int main(){ 
    char str[100]; 
    int contador = 0; 

    printf("Digite uma string:");
    scanf("%[^\n]s", str); 

    while(str[contador] != "\0"){ 
        contador++;
    } 

    printf("A string fornecida tem %d caracteres.\n", contador);

    return 0;
}