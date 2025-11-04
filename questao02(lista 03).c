#include <stdio.h> 
#include <string.h>

int main(){ 
    char str[100];
    char caractere;
    char *resultado; 

    printf("Digite uma string:"); 
    
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';
   
    printf("Digite um caractere para buscar: ");
    
    scanf(" %c", &caractere); 
    resultado = strchr(str, caractere);

    if (resultado != NULL) {
        printf("A string \"%s\" CONTÉM o caractere '%c'.\n", str, caractere);
    } else {
        printf("A string \"%s\" NÃO CONTÉM o caractere '%c'.\n", str, caractere);
    }

    return 0; 
}