#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //declaração das variáveis
    char letra_estado1, letra_estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[30], nome_cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turistico1, p_turistico2;

    //Lógica para obtenção das informações da carta 1
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n");
    printf("Vamos começar cadastrando a Carta 1! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%c", &letra_estado1);
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", &cod_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &nome_cidade1);
    printf("Informe a população: \n");
    scanf("%lu", &populacao1);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico1);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade1 = populacao1 / area1;
    //Calculando o PIB per capta
    float pib_capita1 = (float) (pib1 * 1000000000.0) / populacao1;

    //Nível mestre
    //Calculando o super poder
    float superPoder1 = (float) populacao1 + area1 + pib1 + p_turistico1 + pib_capita1 + (1.0 / densidade1);
    
    //Exibição dos dados armazenados
    printf("Carta 1:\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", p_turistico1);
    
    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);


    //Lógica para obtenção das informações da carta 2
    printf("Agora a Carta 2! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%c", &letra_estado2);
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", &cod_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &nome_cidade2);
    printf("Informe a população: \n");
    scanf("%lu", &populacao2);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico2);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade2 = populacao2 / area2;
    //Calculando o PIB per capta
    float pib_capita2 = (float) (pib2 * 1000000000.0) / populacao2;

    //Nível mestre
    //Calculando o super poder
    float superPoder2 = (float) populacao2 + area2 + pib2 + p_turistico2 + pib_capita2 + (1.0 / densidade2);
    
    //Exibição dos dados armazenados
    printf("Carta 2:\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", p_turistico2);

    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    //Exibição do comparativo das cartas
    //implementando a lógica com switch case

    //criei duas variáveis para receber o valor digitado pelo usuário.
    int primeiroAtributo;
    int segundoAtributo;

    //Menu de exibição com os dados que serão usados para o comparativo.
    printf("Escolha dois diferentes atributos que serão usados para comparar as cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capta \n");
    printf("7 - Super Poder \n");
    printf("Digite o número do primeiro atributo: \n ");
    scanf("%d", &primeiroAtributo);
    printf("Digite o número do segundo atributo: \n ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo > 7 || segundoAtributo > 7 )
    {
        printf("Selecione um número válido! \n");
    } else if (primeiroAtributo == segundoAtributo)
    {       
        printf("Selecione atributos diferentes.\n");
    } else {
        switch (primeiroAtributo || segundoAtributo)
        {
        case 1:
        printf("Resultado do comparativo de População entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %lu habitantes\n", nome_cidade1, populacao1);
        printf("A Carta 2 da cidade %s possui %lu habitantes\n", nome_cidade2, populacao2);

        if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
        } else if (populacao1 == populacao2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        };
        break;
    
    case 2:
        printf("Resultado do comparativo de Área entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f km²\n", nome_cidade1, area1);
        printf("A Carta 2 da cidade %s possui %,2f km²\n", nome_cidade2, area2);

        if (area1 > area2) {
        printf("Carta 1 venceu!\n");
        } else if (area1 == area2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        };
        break;

    case 3:
        printf("Resultado do comparativo do PIB entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui R$ %.2f Bilhões\n", nome_cidade1, pib1);
        printf("A Carta 2 da cidade %s possui R$ %.2f Bilhões\n", nome_cidade2, pib2);

        if (pib1 > pib2) {
        printf("Carta 1 venceu!\n");
        } else if (pib1 == pib2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        };
        break;

    case 4:
        printf("Resultado do comparativo de Pontos Turísticos entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %d pontos\n", nome_cidade1, p_turistico1);
        printf("A Carta 2 da cidade %s possui %d pontos\n", nome_cidade2, p_turistico2);

        if (p_turistico1 > p_turistico2) {
        printf("Carta 1 venceu!\n");
        } else if (p_turistico1 == p_turistico2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        }
        break;

    case 5:
        printf("Resultado do comparativo da Densidade Populacional entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f hab/km²\n", nome_cidade1, densidade1);
        printf("A Carta 2 da cidade %s possui %.2f hab/km²\n", nome_cidade2, densidade2);

        if (densidade1 < densidade2) {
        printf("Carta 1 venceu!\n");
        } else if (densidade1 == densidade2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        }
        break;

    case 6:
        printf("Resultado do comparativo do PIB per Capta entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui R$ %.2f bilhões\n", nome_cidade1, pib_capita1);
        printf("A Carta 2 da cidade %s possui R$ %.2f bilhões\n", nome_cidade2, pib_capita2);

        if (pib_capita1 > pib_capita2) {
        printf("Carta 1 venceu!\n");
        } else if (pib_capita1 == pib_capita2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        }
        break;

    case 7:
        printf("Resultado do comparativo do Super Poder entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f pontos\n", nome_cidade1, superPoder1);
        printf("A Carta 2 da cidade %s possui %.2f pontos\n", nome_cidade2, superPoder2);

        if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu!\n");
        } else if (superPoder1 == superPoder2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        }
        break;
    return 0;
    }
    
    
}
