#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(){ 
    int N, n;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Digite o tamanho dos vetores de X e Y: "); 
    scanf("%d", &n);

    int X[n], Y[n];

    int M[N][N]; 
    for(int i = 0; i < N; i++){ 
        for(int j = 0; j < N; j++){ 
            M[i][j] = 0;
        }
    }

    srand(time(NULL)); 

    for(int i = 0; i < n; i++){ 
        X[i] = rand() % N; 
        Y[i] = rand() % N;
    } 

    for(int i = 0; i < n; i++){ 
        int a = X[i]; 
        int b = Y[i]; 
        M[a][b]++;
    } 

    printf("\nVetor X: ");
    for (int i = 0; i < n; i++)
        printf("%d ", X[i]);

    printf("\nVetor Y: ");
    for (int i = 0; i < n; i++)
        printf("%d ", Y[i]); 

    printf("\n\nMatriz de Coocorrencias M (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%2d ", M[i][j]);
        printf("\n");
    }

    return 0;
}