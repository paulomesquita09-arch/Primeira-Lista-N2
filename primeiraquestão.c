#include    <stdio.h>  

int main() { 
    int x;
    printf("Digite um inteiro decimal: ");
    scanf("%d", &x); 

    printf("Decimal: %d\n", x);
    printf("Hexadecimal: %X\n", x); 
    printf("Octal: %o\n", x); 

    return 0; 
}