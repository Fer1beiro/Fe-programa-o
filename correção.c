#include <stdio.h>

// Estrutura para armazenar dados das cartas

int main(){
    printf("Cadastro de cartas: \n");

    char estado1, estado2; // Estado: uma letra de A a H
    char codigo1[3], codigo2[3]; // Código da carta
    char cidade1[50], cidade2[50]; // Nome da cidade
    int populacao1, populacao2; // Número de habitantes
    float area1, area2; // Área em km²
    float PIB1, PIB2; // Produto interno Bruto
    int rt1, rt2; // Pontos Turísticos

    // Inserção dos dados da carta 1
    printf("Informe os dados da carta 1: \n");

    printf("Estado: (Uma letra de A a H) \n");
    scanf(" %c", &estado1);  // O espaço antes de %c limpa o buffer

    printf("Código da carta: (Exemplo:A02)\n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    getchar(); // Limpar o buffer antes de ler o nome da cidade
    fgets(cidade1, 50, stdin); // Lê o nome da cidade, incluindo espaços

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("O PIB (Em reais): \n");
    scanf("%f", &PIB1);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &rt1);

    // Inserção de dados da carta 2
    printf("Informe os dados da carta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &estado2);  // O espaço antes de %c limpa o buffer

    printf("Código da carta: (Exemplo:A02)\n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    getchar(); // Limpar o buffer antes de ler o nome da cidade
    fgets(cidade2, 50, stdin); // Lê o nome da cidade, incluindo espaços

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("O PIB (Em reais): \n");
    scanf("%f", &PIB2);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &rt2);

    // Exibição dos dados da carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1); // Formatação para 2 casas decimais
    printf("PIB: %.2f\n", PIB1); // Formatação para 2 casas decimais
    printf("Número de pontos turísticos: %d\n", rt1);

    // Exibição dos dados da carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2); // Formatação para 2 casas decimais
    printf("PIB: %.2f\n", PIB2); // Formatação para 2 casas decimais
    printf("Número de pontos turísticos: %d\n", rt2);

    return 0;
}

