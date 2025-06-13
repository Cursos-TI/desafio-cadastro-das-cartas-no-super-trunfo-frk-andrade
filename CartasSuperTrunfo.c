#include <stdio.h>

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
    char letra_estado1, letra_estado2 ="";
    char cod_carta1[3], cod_carta2[3] = "";
    char nome_cidade1[30], nome_cidade2[30] = "";
    int habitantes1, habitantes2 = "";
    float area1, area2;
    float pib1, pib2;
    int p_turistico1, p_turistico2;

    //Lógica para obtenção das informações da carta 1
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n");
    printf("Vamos começar cadastrando a Carta 1! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%s", &letra_estado1);
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", &cod_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &nome_cidade1);
    printf("Informe a quantidade de habitantes: \n");
    scanf("%d", &habitantes1);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico1);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade1 = habitantes1 / area1;
    //Calculando o PIB per capta
    float pib_capita1 = (float) pib1 / habitantes1;
    
    //Exibição dos dados armazenados
    printf("Carta 1:\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", p_turistico1);
    
    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    //Lógica para obtenção das informações da carta 2
    printf("Agora a Carta 2! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%s", &letra_estado2);
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", &cod_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &nome_cidade2);
    printf("Informe a quantidade de habitantes: \n");
    scanf("%d", &habitantes2);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico2);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade2 = habitantes2 / area2;
    //Calculando o PIB per capta
    float pib_capita2 = (float) pib2 / habitantes2;
    
    //Exibição dos dados armazenados
    printf("Carta 2:\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", p_turistico2);

    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    return 0;
}
