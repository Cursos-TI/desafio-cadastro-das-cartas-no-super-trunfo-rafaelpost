#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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
