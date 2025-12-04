#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

typedef struct{ 
    int *ponteiro_para_vetor; 
    int quantidade_elementos; 
    float media;
}DadosVetor;


int main(){ 
    int n = 10; 
    int soma = 0;

    DadosVetor info; 
    info.quantidade_elementos = n; 

    info.ponteiro_para_vetor = (int *) malloc(n * sizeof(int)); 
    if(info.ponteiro_para_vetor == NULL) return 1; 

    srand(time(NULL));

    printf("Vetor gerado: "); 
    for(int i = 0; i < n; i++){ 
        info.ponteiro_para_vetor = rand() % 100; 
        soma += info.ponteiro_para_vetor[i]; 
        printf("%d", info.ponteiro_para_vetor[i]);
    }

    printf("\n");

    info.media = (float)soma/info.quantidade_elementos;

    printf("Média dos elementos: %.2f\n", info.media);

    free(info.ponteiro_para_vetor);


    return 0;
}