#include <stdio.h> 
#include <string.h> 

int main(){ 
    char str1[50] = "Computador" ; 
    char str2[] = "de navegação"; 
    
    printf("Antes da concatenação: %s\n ", str1); 

    strcat(str1, str2); 

    printf("Depois da concatenação: %s\n", str1);

    return 0;
}