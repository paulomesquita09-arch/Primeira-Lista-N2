#include <stdio.h> 

int main(){ 
float v[15]; 
float menor_num, maior_num, soma; 
int i;

printf("Digite os elementos do vetor:\n");
for(i = 0;i < 15; i++){ 
    printf("Elemento %d:", i + 1); 
    scanf("%f", &v[i]);
}

menor_num = v[0];
maior_num = v[0]; 

for(i = 1; i < 15; i++){ 
    if(v[i] < menor_num){ 
        menor_num = v[i];
    }  
    if(v[i] > maior_num){ 
        maior_num = v[i];
    }

} 

soma = menor_num + maior_num;

printf("\nResultados:\n"); 
printf("Menor elemento: %.2f\n", menor_num);
printf("Maior elemento: %.2f\n", maior_num); 
printf("Soma do menor e maior elemento: %.2f\n", soma);


    return 0;
}