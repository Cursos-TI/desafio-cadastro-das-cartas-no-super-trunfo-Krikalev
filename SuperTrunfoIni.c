#include <stdio.h>
#include <string.h> // Para funções de manipulação de strings
#include <locale.h> // Para configuração de localidade e acentuação

int main() {

    // Configuração para caracteres acentuados e padrões brasileiros
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* ========== DECLARAÇÃO DE VARIÁVEIS ========== */
    // Carta 1 - Conjunto de variáveis para armazenar todos os atributos da carta
    char estado1[3];            // 2 caracteres + terminador \0
    char codigo1[5];            // Código no formato Letra + 2 dígitos + \0 (ex: A01)
    char cidade1[50];           // Nome da cidade com até 49 caracteres
    int populacao1;             // População em valor inteiro
    float area1;                // Área em km² com precisão decimal
    float pib1;                 // PIB em bilhões com precisão decimal
    int pontos_turisticos1;     // Quantidade de pontos turísticos

    // Carta 2 - Estrutura idêntica para segunda carta
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

   /* ========== ENTRADA DE DADOS - CARTA 1 ========== */
    printf("\n=== CADASTRO CARTA 1 ===\n");
    
    // Estado: leitura de um único caractere com limpeza de buffer
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);               // O espaço antes do %c ignora whitespaces
    
    // Código: leitura de string com tamanho fixo (3 caracteres)
    printf("Digite o Código (ex A02): ");
    scanf("%3s", codigo1);                // Garante leitura de exatamente 3 caracteres
    getchar();                            // Remove o \n residual do buffer
    

    // Cidade: leitura com fgets para permitir espaços
    printf("Digite o Nome da cidade: ");
    fgets(cidade1, 50, stdin);              // Lê até 49 caracteres incluindo espaços
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove a quebra de linha final
    
    
    // Dados numéricos: leitura direta com scanf
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();  // Limpeza final do buffer para próxima entrada


    /* ========== ENTRADA DE DADOS - CARTA 2 ========== */
    // Repete o mesmo padrão de leitura para a segunda carta
    printf("\n=== CADASTRO CARTA 2 ===\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código (ex B03): ");
    scanf("%3s", codigo2);
    getchar();
    
    printf("Digite o Nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();


    /* ========== EXIBIÇÃO DOS RESULTADOS ========== */
    // Mostra os dados cadastrados com formatação padronizada
    printf("\n\n=== CARTA 1 CADASTRADA ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);   // Unidade habitantes explicita
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);             // Unidade monetária R$ e bilhões
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos1);

    // Repete a exibição para segunda carta com mesmos padrões
    printf("=== CARTA 2 CADASTRADA ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}