#include <stdio.h>  
#include <string.h>

int main(){ 
    FILE *arquivo = fopen("usuarios.csv", "a"); 
    if(!arquivo){ 
        printf("Erro ao abrir o arquivo!\n"); 
        return 1; 
    } 

    char nome[50], email[50]; 
    int idade, opçao;

    fseek(arquivo, 0, SEEK_END);
    if (ftell(arquivo) == 0) {
        fprintf(arquivo, "Nome;Idade;Email\n");
    }

    do {
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &idade);
        getchar();

        printf("Email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0';

        fprintf(arquivo, "%s;%d;%s\n", nome, idade, email);  

        printf("Adicionar outro usuário? (1=sim, 0=não): ");
        scanf("%d", &opçao);
        getchar();
    } while (opçao == 1);

    fclose(arquivo);
    return 0;
}