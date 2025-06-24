#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade1[100], cidade2[100]; //Declara o nome das variáveis para as cidades
    char estado1, estado2; //Declara o nome das variáveis para os estados
    char codigo1[5], codigo2[5]; //Declara o nome das variáveis para os códigos
    int populacao1, populacao2; //Declara o nome das variáveis para as populações
    int pontostur1, pontostur2; //Declara o nome das variáveis para os pontos turísticos
    float pib1, pib2; //Declara o nome das variáveis para o PIB das cidades
    float area1, area2; //Declara o nome das variáveis para a área das cidades

    printf("Bem-vindo(a) ao jogo Super Trunfo Países! Nesse jogo, cada jogador cadastrará as informações de sua carta, para compará-las com a do adversário.\n");
    
    printf("Vamos começar? \nPara iniciar, cadastraremos a primeira carta. Digite a letra que representa o estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado1); //Coleta a letra do estado da primeira carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigo1); //Coleta o código da primeira carta

    printf("\nCerto! Agora, digite o nome da cidade (sem espaços): \n");
    scanf("%s", cidade1); //Coleta o nome da cidade da primeira carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    scanf("%d", &populacao1); //Coleta a população da cidade da primeira carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontostur1); //Coleta o número de pontos turísticos da cidade da primeira carta

    printf("\nFalta pouco! Digite o PIB da cidade: \n");
    scanf("%f", &pib1); //Coleta o PIB da cidade da primeira carta

    printf("\nPor último, digite a área da cidade: \n");
    scanf("%f", &area1); //Coleta a área da cidade da primeira carta

    printf("\nExcelente! Vamos cadastrar a segunda carta? \nPara continuar, digite a letra que representa o estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado2); //Coleta a letra do estado da segunda carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigo2); //Coleta o código da segunda carta

    printf("\nCerto! Agora, digite o nome da cidade (sem espaços): \n");
    scanf("%s", cidade2); //Coleta o nome da cidade da segunda carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    scanf("%d", &populacao2); //Coleta a população da cidade da segunda carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontostur2); //Coleta o número de pontos turísticos da cidade da segunda carta

    printf("\nFalta pouco! Digite o PIB da cidade: \n");
    scanf("%f", &pib2); //Coleta o PIB da cidade da segunda carta

    printf("\nPor último, digite a área da cidade: \n");
    scanf("%f", &area2); //Coleta a área da cidade da segunda carta
    
    printf("Parabéns! Vamos verificar os atributos das cartas.");

    //Exibe os atributos da primeira carta
    printf("\n\n Carta 1");
    printf("\n Estado: %c ", estado1);
    printf("\n Código: %s", codigo1);
    printf("\n Cidade: %s", cidade1);
    printf("\n População: %d", populacao1);
    printf("\n Número de Pontos Turísticos: %d", pontostur1);
    printf("\n PIB: %.2f", pib1);
    printf("\n Área da cidade: %.2f",area1);
    
    //Exibe os atributos da segunda carta
    printf("\n\n Carta 2");
    printf("\n Estado: %c ", estado2);
    printf("\n Código: %s", codigo2);
    printf("\n Cidade: %s", cidade2);
    printf("\n População: %d", populacao2);
    printf("\n Número de Pontos Turísticos: %d", pontostur2);
    printf("\n PIB: %.2f", pib2);
    printf("\n Área da cidade: %.2f \n\n",area2);

    return 0;
}
