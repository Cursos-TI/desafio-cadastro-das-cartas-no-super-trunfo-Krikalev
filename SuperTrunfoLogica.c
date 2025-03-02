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
    
    // Variáveis para armazenar as escolhas do usuário
    int primeiroAtributo, segundoAtributo;
    int vencedorPrimeiroAtributo = 0, vencedorSegundoAtributo = 0;
    float valorPrimeiroAtributo1 = 0.0, valorPrimeiroAtributo2 = 0.0;
    float valorSegundoAtributo1 = 0.0, valorSegundoAtributo2 = 0.0;
    float somaCarta1 = 0.0, somaCarta2 = 0.0;
    
    // Variáveis para armazenar nomes e unidades dos atributos
    char nomePrimeiroAtributo[30] = "";
    char nomeSegundoAtributo[30] = "";
    char unidadePrimeiroAtributo[20] = "";
    char unidadeSegundoAtributo[20] = "";
    
    // Variáveis para controle de resultado
    int resultado1 = 0, resultado2 = 0;
    char vencedorFinal[50] = "";
    
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
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d pontos\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\n");
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d pontos\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);
    
    // Menu interativo para escolha do primeiro atributo
    printf("=== MENU DE COMPARAÇÃO ===\n\n");
    printf("Você deve escolher DOIS atributos diferentes para comparação!\n\n");
    
    // Exibir menu para o primeiro atributo
    printf("--- ESCOLHA DO PRIMEIRO ATRIBUTO ---\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("0 - Sair do jogo\n\n");
    
    printf("Digite sua opção: ");
    scanf("%d", &primeiroAtributo);
    
    // Verificação de opção inválida para o primeiro atributo
    while (primeiroAtributo < 0 || primeiroAtributo > 6) {
        printf("\nOpção inválida! Por favor, escolha uma opção entre 0 e 6.\n");
        printf("Digite sua opção: ");
        scanf("%d", &primeiroAtributo);
    }
    
    // Se o usuário escolher sair
    if (primeiroAtributo == 0) {
        printf("\nObrigado por jogar Super Trunfo de Cidades! Até a próxima!\n");
        return 0;
    }
    
    // Definir o nome e unidade do primeiro atributo escolhido
    switch (primeiroAtributo) {
        case 1:
            strcpy(nomePrimeiroAtributo, "População");
            strcpy(unidadePrimeiroAtributo, "habitantes");
            break;
        case 2:
            strcpy(nomePrimeiroAtributo, "Área");
            strcpy(unidadePrimeiroAtributo, "km²");
            break;
        case 3:
            strcpy(nomePrimeiroAtributo, "PIB");
            strcpy(unidadePrimeiroAtributo, "bilhões de reais");
            break;
        case 4:
            strcpy(nomePrimeiroAtributo, "Pontos Turísticos");
            strcpy(unidadePrimeiroAtributo, "pontos");
            break;
        case 5:
            strcpy(nomePrimeiroAtributo, "Densidade Populacional");
            strcpy(unidadePrimeiroAtributo, "hab/km²");
            break;
        case 6:
            strcpy(nomePrimeiroAtributo, "PIB per Capita");
            strcpy(unidadePrimeiroAtributo, "reais");
            break;
        default:
            printf("Opção inválida! Por favor, reinicie o programa.\n");
            return 1;
    }
    
    // Menu interativo para escolha do segundo atributo
    printf("\n--- ESCOLHA DO SEGUNDO ATRIBUTO ---\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    
    // Exibir menu dinâmico para o segundo atributo (ocultando o primeiro atributo escolhido)
    if (primeiroAtributo != 1) printf("1 - População\n");
    if (primeiroAtributo != 2) printf("2 - Área\n");
    if (primeiroAtributo != 3) printf("3 - PIB\n");
    if (primeiroAtributo != 4) printf("4 - Pontos Turísticos\n");
    if (primeiroAtributo != 5) printf("5 - Densidade Populacional\n");
    if (primeiroAtributo != 6) printf("6 - PIB per Capita\n");
    printf("0 - Sair do jogo\n\n");
    
    printf("Digite sua opção: ");
    scanf("%d", &segundoAtributo);
    
    // Verificação de opção inválida para o segundo atributo
    while (segundoAtributo < 0 || segundoAtributo > 6 || segundoAtributo == primeiroAtributo) {
        if (segundoAtributo == primeiroAtributo) {
            printf("\nVocê já escolheu esse atributo! Por favor, escolha um atributo diferente.\n");
        } else if (segundoAtributo < 0 || segundoAtributo > 6) {
            printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
        }
        printf("Digite sua opção: ");
        scanf("%d", &segundoAtributo);
    }
    
    // Se o usuário escolher sair
    if (segundoAtributo == 0) {
        printf("\nObrigado por jogar Super Trunfo de Cidades! Até a próxima!\n");
        return 0;
    }
    
    // Definir o nome e unidade do segundo atributo escolhido
    switch (segundoAtributo) {
        case 1:
            strcpy(nomeSegundoAtributo, "População");
            strcpy(unidadeSegundoAtributo, "habitantes");
            break;
        case 2:
            strcpy(nomeSegundoAtributo, "Área");
            strcpy(unidadeSegundoAtributo, "km²");
            break;
        case 3:
            strcpy(nomeSegundoAtributo, "PIB");
            strcpy(unidadeSegundoAtributo, "bilhões de reais");
            break;
        case 4:
            strcpy(nomeSegundoAtributo, "Pontos Turísticos");
            strcpy(unidadeSegundoAtributo, "pontos");
            break;
        case 5:
            strcpy(nomeSegundoAtributo, "Densidade Populacional");
            strcpy(unidadeSegundoAtributo, "hab/km²");
            break;
        case 6:
            strcpy(nomeSegundoAtributo, "PIB per Capita");
            strcpy(unidadeSegundoAtributo, "reais");
            break;
        default:
            printf("Opção inválida! Por favor, reinicie o programa.\n");
            return 1;
    }
    
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n\n");
    
    // Obter valores dos atributos escolhidos para cada carta
    switch (primeiroAtributo) {
        case 1: // População
            valorPrimeiroAtributo1 = (float)populacao1;
            valorPrimeiroAtributo2 = (float)populacao2;
            break;
        case 2: // Área
            valorPrimeiroAtributo1 = area1;
            valorPrimeiroAtributo2 = area2;
            break;
        case 3: // PIB
            valorPrimeiroAtributo1 = pib1;
            valorPrimeiroAtributo2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorPrimeiroAtributo1 = (float)pontosTuristicos1;
            valorPrimeiroAtributo2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            valorPrimeiroAtributo1 = densidadePopulacional1;
            valorPrimeiroAtributo2 = densidadePopulacional2;
            break;
        case 6: // PIB per Capita
            valorPrimeiroAtributo1 = pibPerCapita1;
            valorPrimeiroAtributo2 = pibPerCapita2;
            break;
    }
    
    switch (segundoAtributo) {
        case 1: // População
            valorSegundoAtributo1 = (float)populacao1;
            valorSegundoAtributo2 = (float)populacao2;
            break;
        case 2: // Área
            valorSegundoAtributo1 = area1;
            valorSegundoAtributo2 = area2;
            break;
        case 3: // PIB
            valorSegundoAtributo1 = pib1;
            valorSegundoAtributo2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valorSegundoAtributo1 = (float)pontosTuristicos1;
            valorSegundoAtributo2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Populacional
            valorSegundoAtributo1 = densidadePopulacional1;
            valorSegundoAtributo2 = densidadePopulacional2;
            break;
        case 6: // PIB per Capita
            valorSegundoAtributo1 = pibPerCapita1;
            valorSegundoAtributo2 = pibPerCapita2;
            break;
    }
    
    // Determinar o vencedor para o primeiro atributo usando operador ternário
    if (primeiroAtributo == 5) { // Densidade Populacional (menor valor vence)
        resultado1 = (valorPrimeiroAtributo1 < valorPrimeiroAtributo2) ? 1 : 
                     (valorPrimeiroAtributo2 < valorPrimeiroAtributo1) ? 2 : 0;
    } else { // Outros atributos (maior valor vence)
        resultado1 = (valorPrimeiroAtributo1 > valorPrimeiroAtributo2) ? 1 : 
                     (valorPrimeiroAtributo2 > valorPrimeiroAtributo1) ? 2 : 0;
    }
    
    // Determinar o vencedor para o segundo atributo usando operador ternário
    if (segundoAtributo == 5) { // Densidade Populacional (menor valor vence)
        resultado2 = (valorSegundoAtributo1 < valorSegundoAtributo2) ? 1 : 
                     (valorSegundoAtributo2 < valorSegundoAtributo1) ? 2 : 0;
    } else { // Outros atributos (maior valor vence)
        resultado2 = (valorSegundoAtributo1 > valorSegundoAtributo2) ? 1 : 
                     (valorSegundoAtributo2 > valorSegundoAtributo1) ? 2 : 0;
    }
    
    // Exibir comparação do primeiro atributo
    printf("Comparação do primeiro atributo (%s):\n\n", nomePrimeiroAtributo);
    printf("Carta 1 - %s: %.2f %s\n", cidade1, valorPrimeiroAtributo1, unidadePrimeiroAtributo);
    printf("Carta 2 - %s: %.2f %s\n\n", cidade2, valorPrimeiroAtributo2, unidadePrimeiroAtributo);
    
    // Exibir resultado do primeiro atributo
    if (resultado1 == 1) {
        printf("Resultado do primeiro atributo: Carta 1 (%s) venceu!\n", cidade1);
        if (primeiroAtributo == 5) {
            printf("Obs: Para densidade populacional, a carta com MENOR valor vence!\n");
        }
    } else if (resultado1 == 2) {
        printf("Resultado do primeiro atributo: Carta 2 (%s) venceu!\n", cidade2);
        if (primeiroAtributo == 5) {
            printf("Obs: Para densidade populacional, a carta com MENOR valor vence!\n");
        }
    } else {
        printf("Resultado do primeiro atributo: Empate!\n");
    }
    
    printf("\n");
    
    // Exibir comparação do segundo atributo
    printf("Comparação do segundo atributo (%s):\n\n", nomeSegundoAtributo);
    printf("Carta 1 - %s: %.2f %s\n", cidade1, valorSegundoAtributo1, unidadeSegundoAtributo);
    printf("Carta 2 - %s: %.2f %s\n\n", cidade2, valorSegundoAtributo2, unidadeSegundoAtributo);
    
    // Exibir resultado do segundo atributo
    if (resultado2 == 1) {
        printf("Resultado do segundo atributo: Carta 1 (%s) venceu!\n", cidade1);
        if (segundoAtributo == 5) {
            printf("Obs: Para densidade populacional, a carta com MENOR valor vence!\n");
        }
    } else if (resultado2 == 2) {
        printf("Resultado do segundo atributo: Carta 2 (%s) venceu!\n", cidade2);
        if (segundoAtributo == 5) {
            printf("Obs: Para densidade populacional, a carta com MENOR valor vence!\n");
        }
    } else {
        printf("Resultado do segundo atributo: Empate!\n");
    }
    
    printf("\n");
    
    // Calcular a soma dos atributos para cada carta
    // Para densidade populacional, usamos o inverso do valor para manter a consistência (menor é melhor)
    if (primeiroAtributo == 5) {
        somaCarta1 += 1.0/valorPrimeiroAtributo1;
        somaCarta2 += 1.0/valorPrimeiroAtributo2;
    } else {
        somaCarta1 += valorPrimeiroAtributo1;
        somaCarta2 += valorPrimeiroAtributo2;
    }
    
    if (segundoAtributo == 5) {
        somaCarta1 += 1.0/valorSegundoAtributo1;
        somaCarta2 += 1.0/valorSegundoAtributo2;
    } else {
        somaCarta1 += valorSegundoAtributo1;
        somaCarta2 += valorSegundoAtributo2;
    }
    
    // Exibir resultado final baseado na soma dos atributos
    printf("=== RESULTADO FINAL ===\n\n");
    printf("Soma dos atributos para Carta 1 (%s): %.2f\n", cidade1, somaCarta1);
    printf("Soma dos atributos para Carta 2 (%s): %.2f\n\n", cidade2, somaCarta2);
    
    // Determinar o vencedor final com base nos resultados individuais
    // Seguindo a lógica do roteiro:
    // - Se resultado1 e resultado2 forem iguais a 1, Carta 1 vence
    // - Se resultado1 e resultado2 forem iguais a 2, Carta 2 vence
    // - Se resultado1 e resultado2 forem diferentes (um é 1 e outro é 2, ou um deles é 0), é empate
    
    if (resultado1 == 1 && resultado2 == 1) {
        strcpy(vencedorFinal, cidade1);
    } else if (resultado1 == 2 && resultado2 == 2) {
        strcpy(vencedorFinal, cidade2);
    } else if (resultado1 != resultado2) {
        strcpy(vencedorFinal, "Empate");
    } else {
        // Caso ambos sejam 0 (empate em ambos atributos), também é empate
        strcpy(vencedorFinal, "Empate");
    }
    
    printf("Vencedor final baseado nos resultados individuais: %s\n\n", vencedorFinal);
    
    // Usar operador ternário para determinar o vencedor final baseado na soma
    printf("Vencedor final baseado na soma dos atributos: %s\n\n", 
           somaCarta1 > somaCarta2 ? cidade1 : 
           somaCarta2 > somaCarta1 ? cidade2 : "Empate!");
    
    // Verificar se os dois métodos de determinação do vencedor são consistentes
    if ((somaCarta1 > somaCarta2 && strcmp(vencedorFinal, cidade1) == 0) ||
        (somaCarta2 > somaCarta1 && strcmp(vencedorFinal, cidade2) == 0) ||
        (somaCarta1 == somaCarta2 && strcmp(vencedorFinal, "Empate") == 0)) {
        printf("Os dois métodos de determinação do vencedor são consistentes!\n\n");
    } else {
        printf("Os dois métodos de determinação do vencedor apresentaram resultados diferentes.\n");
        printf("Isso pode ocorrer devido à natureza dos atributos comparados ou à forma como os empates são tratados.\n\n");
    }
    
    printf("Obrigado por jogar Super Trunfo de Cidades!\n");
    
    return 0;
}