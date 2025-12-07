#include <stdio.h> 
#include <stdlib.h>  
#include <time.h> 
#include <math.h> 

double mae(double *a, double *b, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) s += fabs(*(a+i) - *(b+i));
    return s / n;
} 

double mse(double *a, double *b, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        double d = *(a+i) - *(b+i);
        s += d*d;
    }
    return s / n;
} 

double erro(double *a, double *b, int n,
            double (*f)(double*, double*, int)) {
    return f(a, b, n);
}

int main(){ 
    int N;
    printf("N: ");
    scanf("%d", &N);

    double *A = malloc(N*sizeof(double));
    double *B = malloc(N*sizeof(double));

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        *(A+i) = rand() % N;
        *(B+i) = rand() % N;
    }

    printf("MAE = %.4f\n", erro(A, B, N, mae));
    printf("MSE = %.4f\n", erro(A, B, N, mse));

    free(A); free(B);
}