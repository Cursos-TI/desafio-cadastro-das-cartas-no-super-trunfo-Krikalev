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
     printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);
     
     // Escolha do atributo para comparação (definido diretamente no código)
     // Opções: 1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per Capita
     int atributoEscolhido = 3; // Escolhendo PIB como atributo para comparação
     
     printf("=== COMPARAÇÃO DE CARTAS ===\n\n");
     
     // Comparação baseada no atributo escolhido
     if (atributoEscolhido == 1) {
         // Comparação por População
         printf("Comparação de cartas (Atributo: População):\n\n");
         printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
         printf("Carta 2 - %s: %lu\n\n", cidade2, populacao2);
         
         if (populacao1 > populacao2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (populacao2 > populacao1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     } else if (atributoEscolhido == 2) {
         // Comparação por Área
         printf("Comparação de cartas (Atributo: Área):\n\n");
         printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
         printf("Carta 2 - %s: %.2f km²\n\n", cidade2, area2);
         
         if (area1 > area2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (area2 > area1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     } else if (atributoEscolhido == 3) {
         // Comparação por PIB
         printf("Comparação de cartas (Atributo: PIB):\n\n");
         printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
         printf("Carta 2 - %s: %.2f bilhões de reais\n\n", cidade2, pib2);
         
         if (pib1 > pib2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pib2 > pib1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     } else if (atributoEscolhido == 4) {
         // Comparação por Pontos Turísticos
         printf("Comparação de cartas (Atributo: Pontos Turísticos):\n\n");
         printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
         printf("Carta 2 - %s: %d\n\n", cidade2, pontosTuristicos2);
         
         if (pontosTuristicos1 > pontosTuristicos2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pontosTuristicos2 > pontosTuristicos1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     } else if (atributoEscolhido == 5) {
         // Comparação por Densidade Populacional (menor valor vence)
         printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
         printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
         printf("Carta 2 - %s: %.2f hab/km²\n\n", cidade2, densidadePopulacional2);
         
         if (densidadePopulacional1 < densidadePopulacional2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (densidadePopulacional2 < densidadePopulacional1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     } else if (atributoEscolhido == 6) {
         // Comparação por PIB per Capita
         printf("Comparação de cartas (Atributo: PIB per Capita):\n\n");
         printf("Carta 1 - %s: %.2f reais\n", cidade1, pibPerCapita1);
         printf("Carta 2 - %s: %.2f reais\n\n", cidade2, pibPerCapita2);
         
         if (pibPerCapita1 > pibPerCapita2) {
             printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
         } else if (pibPerCapita2 > pibPerCapita1) {
             printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
         } else {
             printf("Resultado: Empate!\n");
         }
     }
     
     return 0;
 }
 