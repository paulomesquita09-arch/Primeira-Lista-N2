#include <stdio.h> 

int main(void){ 
float celsius, farenheit; 

printf("Digite a temperatura em Celsius: "); 
scanf("%f", &celsius);

farenheit = (9 * celsius + 160)/ 5; 

printf("A temperatura em Farenheit é igual a: %.2f\n", farenheit);

    return 0;
}