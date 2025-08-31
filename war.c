// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================

#include <stdio.h>
#include <string.h>

// Definição da struct Territorio.
// Armazena nome, cor do exército e a quantidade de tropas.
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de vetor para armazenar 5 territorios.
    // Cria um vetor com 5 posições.
    Territorio territorios[5];

    // Entrada de dados dos territorios.
    for (int i = 0; i < 5; i++) {
        printf("\nCadastro do territorio %d:\n", i + 1);

        // Lê os dados digitados pelo usuário.
        //======================================
        
        // Leitura do nome do territorio.
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Leitura da cor do exercito.
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Leitura da quantidade de tropas.
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados digitados pelo usuário.
    printf("\n=== Territorios cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}
