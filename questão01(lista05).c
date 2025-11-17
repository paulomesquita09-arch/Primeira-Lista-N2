#include <stdio.h> 

int main(){ 
    int v[10] = {3, 5, 7, 4, 2, 1, 9, 10, 8, 6}; 

    int *p = v;
    
    for(int i = 0; i < 10; i++){ 
        if(*(p+i)%2 == 0){ 

            printf("Primeiro elemento par: %d\n", *(p+i));  
            printf("Endereço: %p\n", (p+i)); 
            return 0;
    }

}

    printf("Não existe elemento par no vetor.\n");
    return 0;
}