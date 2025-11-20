#include <stdio.h> 

int main(){ 
    int a, b, temp;
    int *pa = &a;
    int *pb = &b; 

    printf("Digite o valor de a: "); 
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    temp = *pa; 
    *pa = *pb; 
    *pb = temp; 

    printf("\nDepois da troca:\n"); 
    printf("a = %d\n", a); 
    printf("b = %d\n", b);

    return 0;
}