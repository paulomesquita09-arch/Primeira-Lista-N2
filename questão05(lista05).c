#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

void gerar_vetor(int vetor[], int tam);
float calcularMedia(int vetor[], int tam);
float calcularMediana(int vetor[], int tam);
int calcularModa(int vetor[], int tam);
void ordenar(int vetor[], int tam);

int main(){ 
    srand(time(NULL));

    int tam = 10; 
    int vetor[tam];

    gerar_vetor(vetor, tam); 

    printf("\nVetor gerado:\n");
    for(int i = 0; i < tam; i++){ 
        printf("%d", vetor[i]);
    }

    float Media = calcularMedia(vetor, tam);
    float Mediana = calcularMediana(vetor, tam);
    int Moda = calcularModa(vetor, tam);

    printf("\n\n Média = %.2f\n", Media);
    printf("Mediana = %.2f\n", Mediana);
    printf("Moda = %d\n", Moda);


    return 0;
} 

void gerarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 50;
    }
} 

float calcularMedia(int vetor[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (float)soma / tamanho;
}

void ordenar(int vetor[], int tamanho) {
    int temp;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[i]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
} 

float calcularMediana(int vetor[], int tamanho) {
    ordenar(vetor, tamanho);  // ordenar antes

    if (tamanho % 2 == 1) {
        return vetor[tamanho / 2];
    } else {
        int meio1 = vetor[(tamanho / 2) - 1];
        int meio2 = vetor[tamanho / 2];
        return (meio1 + meio2) / 2.0;
    }
} 

int calcularModa(int vetor[], int tamanho) {
    int moda = vetor[0];
    int maiorFreq = 1;

    for (int i = 0; i < tamanho; i++) {
        int freq = 1;

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] == vetor[i]) {
                freq++;
            }
        }

        if (freq > maiorFreq) {
            maiorFreq = freq;
            moda = vetor[i];
        }
    }

    return moda;
}