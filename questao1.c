#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct pessoa p;

    printf("insira o nome da pessoa: \n");
    fgets(p.nome, 50, stdin);
    printf("digite a idade da pessoa: \n");
    scanf("%d", &p.idade);
    getchar();
    printf("digite o endereço da pessoa: \n");
    fgets(p.endereco, 100, stdin);

    printf("dados da pessoa: \n");
    printf("nome: %s", p.nome);
    printf("idade: %d\n", p.idade);
    printf("endereço: %s", p.endereco);
}