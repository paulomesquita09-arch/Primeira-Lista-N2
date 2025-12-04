#include <stdio.h>  
#include <string.h>

struct Professor{ 
    int id; 
    char nome[100]; 
    char departamento[50];
};

struct Disciplina{ 
    char codigo[10]; 
    char nome[100]; 
    int creditos; 
    struct Professor professorresponsavel;
}; 

int main(){ 

    struct Professor p1;
    p1.id = 101; 
    strcpy(p1.nome, "Dr. Silva"); 
    strcpy(p1.departamento, "Computação"); 

    struct Disciplina disc1; 
    strcpy(disc1.codigo, "EDC001"); 
    strcpy(disc1.nome, "Estrutura de dados"); 
    disc1.creditos = 4; 
    disc1.professorresponsavel = p1; 

    printf("Disciplina: %s\n", disc1.nome);
    printf("Professor responsável : %s\n", disc1.professorresponsavel.nome);
    printf("ID do Professor: %d\n", disc1.professorresponsavel.id);

    return 0;
}