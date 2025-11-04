#include <stdio.h> 
#include <string.h> 

int main(){ 
    char str[100]; 
    int comprimento; 
    int i; 

    printf("Digite uma string: "); 
    fgets(str, 100, stdin); 

    comprimento = strlen(str); 

    if(str[comprimento - 1] == '\n'){ 
        str[comprimento - 1] = '\0'; 
        comprimento--;
    } 

    printf("O inverso dessa string é: "); 

    for(i = comprimento - 1; i >= 0; i--){ 
        printf("%c", str[i]); 
    }

    printf("\n");

    return 0;
}