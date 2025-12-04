#include <stdio.h> 

struct aluno{ 
    double nota1; 
    double nota2; 
}; 

    double media(struct aluno a){ 
        return(a.nota1 + a.nota2)/2.0;
    }

int main(){ 
    
    struct aluno Alunos[3]; 

    for(int i = 0; i < 3; i++){ 
        printf("Digite a nota 1 do aluno %d: ", i + 1); 
        scanf("%lf", &Alunos[i].nota1); 

        printf("Digite a nota 2 do aluno %d: ", i + 1); 
        scanf("%lf", &Alunos[i].nota2);
    }

    for(int i = 0; i < 3; i++){ 
        double m = media(Alunos[i]); 
        printf("\nMédia do aluno %d = %.2lf\n", i + 1, m);
    }


    return 0;
}