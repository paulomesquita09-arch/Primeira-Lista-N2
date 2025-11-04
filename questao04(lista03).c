#include <stdio.h> 
#include <stdbool.h> 

#define MAX 100

int main(){ 
    char s1[MAX], s2[MAX];  
    bool sao_iguais = true; 
    int i = 0; 

    printf("--- Versao sem strcmp() ---\n");
    printf("Digite a primeira string: ");
    scanf("%s", s1);

    printf("Digite a segunda string: ");
    scanf("%s", s2);

     while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            sao_iguais = false;
            break; 
        }  

        i++; 
    
     }

     if (sao_iguais && s1[i] == '\0' && s2[i] == '\0') {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }


    return 0;
}