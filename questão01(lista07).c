#include <stdio.h> 

struct aluno{ 
    double nota1; 
    double nota2;  
};  

    double media(struct aluno a){ 
        return (a.nota1 + a.nota2)/2.0;
    }

int main(){ 
    struct aluno a1; 

    printf("Digite a primeira nota: "); 
    scanf("%lf", &a1.nota1);

    printf("Digite a segunda nota: "); 
    scanf("%lf", &a1.nota2); 

    double m = media(a1); 

    printf("A media do aluno é igual a: %.2lf\n", m);
    return 0;
}