#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

void somar_vetores(float vetor[], int tamanho, float *resultado){ 
    *resultado = 0; 

    for(int i = 0; i < tamanho; i++){ 
        *resultado += vetor[i];
    }
}

int main(){ 
    int tamanho = 10; 
    float vetor[tamanho];
    float soma;

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){ 
        vetor[i] = (float)(rand())/RAND_MAX; 
        printf("v[%d] = %.2f\n", i, vetor[i]); 

    }

    somar_vetores(vetor, tamanho, &soma);

    printf("\nSoma dos elementos = %.2f\n", soma);
    return 0;
}