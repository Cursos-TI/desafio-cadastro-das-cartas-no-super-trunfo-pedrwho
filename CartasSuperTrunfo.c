#include <stdio.h>

int main() {
    char estado1 [50];
    char codigo1 [4];
    char nomeCidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2 [50];
    char codigo2 [4];
    char nomeCidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %s", &estado1);
    printf("Código da carta (exemplo: A01): ");
    scanf(" %s", &codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", &nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf(" %s", &estado2);
    printf("Código da carta (exemplo: A01): ");
    scanf(" %s", &codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}