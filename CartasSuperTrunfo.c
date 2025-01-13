#include <stdio.h>
#include <string.h>


int main() {
    // Definição das variáveis para o cadastro das cartas:
    int cod_cidade;
    char nome[50];
    int populacao;
    double area;
    double pib;
    int num_pontoturistico;
    
    // Cadastro das cartas:
    printf("Informe o codigo da cidade: ");
    scanf("%d", &cod_cidade);
    getchar();

    printf("Informe o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha, caso exista.
    
    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao);
    getchar();

    printf("Informe a area da cidade: ");
    scanf("%lf", &area);
    getchar();

    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib);
    getchar();

    printf("Informe o numero de Pontos Turisticos da cidade: ");
    scanf("%d", &num_pontoturistico);
    getchar();

    
    // Exibição dos dados cadastrados:
    printf("\n----------------------------------------------\n");
    printf("\t\tDADOS DA CARTA\n");
    printf("----------------------------------------------\n");
    printf("Codigo da cidade            :   %02d\n", cod_cidade);
    printf("Nome da cidade              :   %s\n", nome);
    printf("Populacao da cidade         :   %d\n", populacao);
    printf("Area da cidade              :   %0.2f\n", area);
    printf("PIB da cidade               :   %0.2f\n", pib);
    printf("Numero de pontos turisticos :   %d\n", num_pontoturistico);
    printf("----------------------------------------------\n");
    printf("\n\n");

    return 0;
}
