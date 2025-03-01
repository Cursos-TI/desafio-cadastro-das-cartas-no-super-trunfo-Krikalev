#include <stdio.h>    // Biblioteca padrão de entrada e saída
#include <string.h>   // Biblioteca para manipulação de strings
#include <locale.h>   // Biblioteca para suporte a caracteres locais

int main()
{
    // Configuração para suportar caracteres brasileiros
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // Declaração das variáveis do programa
    char estado;               // Armazena a sigla do estado (um caractere)
    char CodigoCarta[3];       // Armazena o código da carta (até 2 caracteres + '\0')
    char NomedaCidade[50];     // Armazena o nome da cidade (até 49 caracteres + '\0')
    int Populacao;             // Armazena a população da cidade
    float Area;                // Armazena a área da cidade em km²
    float PIB;                 // Armazena o PIB da cidade em reais
    int PontosTuristicos;      // Armazena a quantidade de pontos turísticos
    int num_carta = 1;         // Número da carta (inicializado com 1)

    // Captura dos dados da carta
    printf("Digite o estado da carta: ");
    scanf("%c", &estado);      // Lê um caracter para o estado

    printf("Digite o código da carta: ");
    scanf("%s", CodigoCarta);  // Lê uma string para o código
    
    // Limpa o buffer do teclado antes de usar fgets
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomedaCidade, sizeof(NomedaCidade), stdin);    // Lê o nome com espaços
    NomedaCidade[strcspn(NomedaCidade, "\n")] = '\0';    // Remove o caracter de nova linha
    
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);   // Lê um número inteiro

    printf("Digite a área da cidade: ");
    scanf("%f", &Area);        // Lê um número decimal

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);         // Lê um número decimal

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &PontosTuristicos);   // Lê um número inteiro

    // Exibição das informações da carta
    printf("\n----- DADOS DA CARTA DE SUPER TRUNFO -----\n");
    printf("Carta %d:\n", num_carta);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", CodigoCarta);
    printf("Nome da cidade: %s\n", NomedaCidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);
    printf("------------------------------------------\n");

    
    printf("Digite o estado da carta: ");
    scanf("%c", &estado);     

    printf("Digite o código da carta: ");
    scanf("%s", CodigoCarta);  
    
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomedaCidade, sizeof(NomedaCidade), stdin);    
    NomedaCidade[strcspn(NomedaCidade, "\n")] = '\0';   
    
    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);   

    printf("Digite a área da cidade: ");
    scanf("%f", &Area);        

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);         

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &PontosTuristicos);   

    num_carta++;    // Incrementa o número da carta


    printf("\n----- DADOS DA CARTA DE SUPER TRUNFO -----\n");
    printf("Carta %d:\n", num_carta);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", CodigoCarta);
    printf("Nome da cidade: %s\n", NomedaCidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", PontosTuristicos);
    printf("------------------------------------------\n");
    
    return 0;    // Retorna 0 indicando que o programa foi executado com sucesso
}