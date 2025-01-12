#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod_cidade;
    char nome[50];
    int populacao;
    double area;
    double pib;
    int num_pontoturistico;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o codigo da cidade: ");
    scanf("%d", &cod_cidade);

    printf("\nInforme o nome da cidade: ");
    scanf("%s", nome);

    printf("\nInforme a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("\nInforme a area da cidade: ");
    scanf("%lf", &area);

    printf("\nInforme o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("\nInforme o numero de Pontos Turísticos da cidade: ");
    scanf("%d", &num_pontoturistico);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo da cidade: %d\n", cod_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Area da cidade: %0.2f\n", area);
    printf("PIB da cidade: %0.2f\n", pib);
    printf("Numero de pontos turisticos da cidade: %d\n", num_pontoturistico);

    return 0;
}
