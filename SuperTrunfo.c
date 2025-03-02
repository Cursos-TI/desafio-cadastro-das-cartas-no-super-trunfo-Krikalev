#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf-8");
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; // Nova variável para o Super Poder
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2; // Nova variável para o Super Poder
    
    // Variáveis para armazenar os resultados das comparações
    int compPopulacao, compArea, compPIB, compPontosTuristicos;
    int compDensidade, compPIBperCapita, compSuperPoder;
    
    // Mensagem de boas-vindas
    printf("=== SUPER TRUNFO DE CIDADES ===\n\n");
    printf("Cadastre duas cartas para o jogo!\n\n");
    
    // Leitura dos dados da primeira carta
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("População: ");
    scanf("%lu", &populacao1); // Formato alterado para unsigned long int
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1; // Convertendo bilhões para reais
    
    printf("\n");
    
    // Leitura dos dados da segunda carta
    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%lu", &populacao2); // Formato alterado para unsigned long int
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2; // Convertendo bilhões para reais
    
    // Cálculo do Super Poder para cada carta
    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + 
                  pibPerCapita1 + (1.0 / densidadePopulacional1);
    
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + 
                  pibPerCapita2 + (1.0 / densidadePopulacional2);
    
    printf("\n");
    
    // Exibição dos dados das cartas cadastradas
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    printf("\n");
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);
    
    // Comparação das cartas
    // Para cada atributo, 1 significa que a Carta 1 venceu, 0 significa que a Carta 2 venceu
    compPopulacao = (populacao1 > populacao2) ? 1 : 0;
    compArea = (area1 > area2) ? 1 : 0;
    compPIB = (pib1 > pib2) ? 1 : 0;
    compPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    // Para densidade populacional, o menor valor vence
    compDensidade = (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0;
    compPIBperCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    compSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;
    
    // Exibição dos resultados das comparações
    printf("=== COMPARAÇÃO DE CARTAS ===\n\n");
    
    printf("População: Carta %d venceu (%d)\n", compPopulacao ? 1 : 2, compPopulacao);
    printf("Área: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPIB ? 1 : 2, compPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", compPontosTuristicos ? 1 : 2, compPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDensidade ? 1 : 2, compDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPIBperCapita ? 1 : 2, compPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", compSuperPoder ? 1 : 2, compSuperPoder);
    
    return 0;
}
