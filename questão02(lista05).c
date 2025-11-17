#include <stdio.h>  

void encontraPares(int *v, int n, int **enderecos){ 
    enderecos[0] = NULL; 
    enderecos[1] = NULL; 

    for(int i = 0; i < n; i++){ 

        if(*(v + i)%2 == 0){ 

            if(enderecos[0] == NULL){ 
                enderecos[0] = v + i;
            } 

            enderecos[1] = v + i;
        }
    }
}

int main(){ 
    int v[10] = {3, 5, 7, 4, 2, 1, 9, 10, 8, 6}; 

    int *enderecos[2]; 
    
    encontraPares(v, 10, enderecos); 

    if(enderecos[0] != NULL){ 
        printf("Primeiro par: %d\n", *enderecos[0]);
        printf("Endereco: %p\n", enderecos[0]);

        printf("Ultimo par: %d\n", *enderecos[1]);
        printf("Endereco: %p\n", enderecos[1]);
    } else {
        printf("Nao existe elemento par.\n");
    }

    return 0;
}