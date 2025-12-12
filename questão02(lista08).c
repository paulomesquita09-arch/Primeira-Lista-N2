#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

typedef struct{ 
    int registro; 
    char nome[30]; 
    int quantidade; 
    float custo; 
} Ferramenta;  

void inicializarArquivo() {
    FILE *f = fopen("hardware.dat", "wb");
    Ferramenta vazia = { -1, "", 0, 0.0 };

    for (int i = 0; i < 100; i++) {
        fwrite(&vazia, sizeof(Ferramenta), 1, f);
    }

    fclose(f);
    printf("Arquivo inicializado com 100 registros vazios.\n");
} 

void inserir() {
    FILE *f = fopen("hardware.dat", "r+b");

    Ferramenta ferr;
    printf("Número do registro (0–99): ");
    scanf("%d", &ferr.registro);
    getchar();

    printf("Nome da ferramenta: ");
    fgets(ferr.nome, 30, stdin);
    ferr.nome[strcspn(ferr.nome, "\n")] = 0;

    printf("Quantidade: ");
    scanf("%d", &ferr.quantidade);

    printf("Custo: ");
    scanf("%f", &ferr.custo);

    fseek(f, ferr.registro * sizeof(Ferramenta), SEEK_SET);
    fwrite(&ferr, sizeof(Ferramenta), 1, f);

    fclose(f);
} 

void listar() {
    FILE *f = fopen("hardware.dat", "rb");
    Ferramenta ferr;

    printf("\nLISTA DE FERRAMENTAS:\n");
    printf("Reg\tNome\t\tQtd\tCusto\n");

    for (int i = 0; i < 100; i++) {
        fread(&ferr, sizeof(Ferramenta), 1, f);
        if (ferr.registro != -1) {
            printf("%d\t%-15s\t%d\t%.2f\n", ferr.registro, ferr.nome, ferr.quantidade, ferr.custo);
        }
    }
    fclose(f);
} 

void excluir() {
    FILE *f = fopen("hardware.dat", "r+b");

    int id;
    printf("Registro a excluir: ");
    scanf("%d", &id);

    Ferramenta vazia = { -1, "", 0, 0.0 };

    fseek(f, id * sizeof(Ferramenta), SEEK_SET);
    fwrite(&vazia, sizeof(Ferramenta), 1, f);

    fclose(f);
} 

void atualizar() {
    FILE *f = fopen("hardware.dat", "r+b");
    Ferramenta ferr;

    printf("Número do registro para atualizar: ");
    scanf("%d", &ferr.registro);
    getchar();

    printf("Novo nome: ");
    fgets(ferr.nome, 30, stdin);
    ferr.nome[strcspn(ferr.nome, "\n")] = 0;

    printf("Nova quantidade: ");
    scanf("%d", &ferr.quantidade);

    printf("Novo custo: ");
    scanf("%f", &ferr.custo);

    fseek(f, ferr.registro * sizeof(Ferramenta), SEEK_SET);
    fwrite(&ferr, sizeof(Ferramenta), 1, f);

    fclose(f);
}

int main(){ 
    int opçao; 

     do {
        printf("\nMENU:\n");
        printf("1 - Inicializar arquivo\n");
        printf("2 - Inserir ferramenta\n");
        printf("3 - Listar ferramentas\n");
        printf("4 - Excluir ferramenta\n");
        printf("5 - Atualizar ferramenta\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opçao);
        getchar();

        switch (opçao) {
            case 1: inicializarArquivo(); break;
            case 2: inserir(); break;
            case 3: listar(); break;
            case 4: excluir(); break;
            case 5: atualizar(); break;
        } 
    
     } while (opçao != 0);

     return 0;
}