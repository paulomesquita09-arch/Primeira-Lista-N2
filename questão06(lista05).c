#include <stdio.h> 

float erroMedioQuadrático(float A[], float B[], int n);

int main(void){ 
    int n = 3; 
    float A[] = {2.0, 4.0, 6.0};
    float B[] = {1.0, 3.0, 7.0};

    float mse = erroMedioQuadratico(A, B, n);

    printf("Erro Médio Quadrático: %.4f", mse);

    return 0;
} 

 float erroMedioQuadrático(float A[], float B[], int n){ 
        float soma = 0.0f; 
        for(int i = 0; i < n; i++){ 
            float dif = A[i] - B[i]; 
            soma += dif * dif;

        }
            return soma/n;
    }