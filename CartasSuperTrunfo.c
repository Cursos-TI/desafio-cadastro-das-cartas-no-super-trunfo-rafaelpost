#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

// Função para inserir os dados de uma carta
void inserirDados(CartaSuperTrunfo *carta) {
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta (Ex: A01, B03): ");
    scanf(" %3s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49s", carta->nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &carta->populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &carta->area);
    
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirDados(const CartaSuperTrunfo *carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

int main() {

    CartaSuperTrunfo carta1, carta2;
    
    printf("\nCadastro da Primeira Carta:\n");
    inserirDados(&carta1);
    
    printf("\nCadastro da Segunda Carta:\n");
    inserirDados(&carta2);
    
    printf("\n\nExibindo as cartas cadastradas:\n");
    exibirDados(&carta1);
    exibirDados(&carta2);
    
    return 0;
}
