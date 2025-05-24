#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

 // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
   
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


int main() {
    char estado1, estado2;
    char codigo1[40], codigo2[40];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontos1, pontos2;

    printf("Digite os dados da CARTA 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nDigite os dados da CARTA 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Calculando densidade demográfica
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // Calculando PIB per capita
    float pibPerCapita1 = (PIB1 * 1000000000) / populacao1;
    float pibPerCapita2 = (PIB2 * 1000000000) / populacao2;

    // Calculando Super Poder
    float superPoder1 = (float)populacao1 + area1 + PIB1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + PIB2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Imprimindo dados completos das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Super Poder\n");
    printf("7 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    float valor1 = 0, valor2 = 0;
    char nomeAtributo[40];

    switch(opcao) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            sprintf(nomeAtributo, "População");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            sprintf(nomeAtributo, "Área");
            break;
        case 3:
            valor1 = PIB1;
            valor2 = PIB2;
            sprintf(nomeAtributo, "PIB");
            break;
        case 4:
            valor1 = pontos1;
            valor2 = pontos2;
            sprintf(nomeAtributo, "Número de Pontos Turísticos");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            sprintf(nomeAtributo, "Densidade Demográfica");
            break;
        case 6:
            valor1 = superPoder1;
            valor2 = superPoder2;
            sprintf(nomeAtributo, "Super Poder");
            break;
        case 7:
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            sprintf(nomeAtributo, "PIB per Capita");
            break;
        default:
            printf("Opção inválida! Encerrando o programa.\n");
            return 1;
    }

    printf("\nComparando as cartas pelo atributo: %s\n", nomeAtributo);

    printf("Carta 1 (%s, %s): %.2f\n", cidade1, codigo1, valor1);
    printf("Carta 2 (%s, %s): %.2f\n", cidade2, codigo2, valor2);

    if (opcao == 5) {
        // Para densidade demográfica, menor valor vence
        if (valor1 < valor2) {
            printf("Vencedor: Carta 1\n");
        } else if (valor2 < valor1) {
            printf("Vencedor: Carta 2\n");
        } else {
            printf("Empate!\n");
        }
    } else {
        // Para os outros atributos, maior valor vence
        if (valor1 > valor2) {
            printf("Vencedor: Carta 1\n");
        } else if (valor2 > valor1) {
            printf("Vencedor: Carta 2\n");
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}