#include <stdio.h> 

int main(){ 
    int n1, n2; 
    int *pont1, *pont2; 

    printf("Digite um número: "); 
    scanf("%d", n1); 

    *pont1 = &n1; 

    printf("Digite outro número: "); 
    scanf("%d", n2);  

    *pont2 = &n2;









    return 0;
}