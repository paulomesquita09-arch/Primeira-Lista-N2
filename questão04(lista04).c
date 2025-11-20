#include <stdio.h> 

int main(){ 
    int n; 

    printf("Quantos elementos terá o vetor ?: "); 
    scanf("%d", &n); 

    int v[n]; 

    for(int i = 0; i < n; i++){ 
        printf("Digite o elemento %d: ", i); 
        printf("%d", &v[i]);
    } 

    printf("\nValores e Endereços: "); 
    for(int i = 0; i < n; i++){ 
        printf("vet[%d] = %d | endereço = %p\n", i, v[i], (void*)&v[i]);
    }

    return 0;
}