#include <stdio.h> 
#include <string.h> 

#define TAM 200

int main(){ 
    char str1[TAM]; 
    char str2[TAM]; 

    printf("Digite a primeira string: "); 
    fgets(str1, TAM, stdin); 

    printf("Digite a segunda string: "); 
    fgets(str2, TAM, stdin); 

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0; 

    strcat(str1, str2);

    printf("Strings concatenadas: %s\n", str1);


    return 0;
}