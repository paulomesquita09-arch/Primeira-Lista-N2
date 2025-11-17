#include <stdio.h> 

int main(){  
    int n; 

    printf("Digite o tamanho de um vetor:"); 
    scanf("%d", &n); 

    int X[n]; 

    printf("Digite os %d valores do vetor:\n", n); 
    for(int i = 0; i < n; i++){ 
        scanf("%d", &X[i]);
    }
 
    int min = X[0];
    int max = X[0];
    for (int i = 1; i < n; i++) {
        if (X[i] < min) min = X[i];
        if (X[i] > max) max = X[i];
    }

    float Xnorm[n];  
    for(int i = 0; i < n; i++){ 
        Xnorm[i] = (float)(X[i] - min)/(max - min); 
    }

    printf("\nVetor normalizado:\n"); 
    for(int i = 0; i < n; i++){ 
        printf("%.4f", Xnorm[i]);
    }







    return 0;
}