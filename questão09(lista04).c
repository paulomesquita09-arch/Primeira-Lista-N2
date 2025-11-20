#include <stdio.h> 

void BubbleSort(int v[], int n){ 
    int i, j, aux; 

    for(int i = 0; i < n - 1; i++){ 
        for(j = 0; j < n - 1 - i; j++){  

            if(v[j] > v[j + 1]){ 
                aux = v[j]; 
                v[j] = v[j + 1]; 
                v[j + 1] = aux;
            }
        }
    }
}

int main(){ 
    int v[] = {3, 7, 5, 2, 8};
    int n = 5; 

    BubbleSort(v,n);

    printf("\nO vetor gerado:\n"); 
    for(int i = 0; i < n; i++){ 
        printf("%d", v[i]);
    }

    return 0;
}