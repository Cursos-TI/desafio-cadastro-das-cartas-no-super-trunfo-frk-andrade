#include <stdio.h>
#include <string.h>

int main() {
    
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
    while (getchar() != '\\n');
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", cod_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe a população: \n");
    scanf("%lu", &populacao1);
    while (getchar() != '\\n');
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area1);
    while (getchar() != '\\n');
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    while (getchar() != '\\n');
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico1);
    while (getchar() != '\\n');

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

    //Exibição do resultado de nível mestre
    printf("Super Poder: %.2f \n", superPoder1);

    //Lógica para obtenção das informações da carta 2
    printf("Agora a Carta 2! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%c", &letra_estado2);
    while (getchar() != '\\n');
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", cod_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe a população: \n");
    scanf("%lu", &populacao2);
    while (getchar() != '\\n');
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area2);
    while (getchar() != '\\n');
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    while (getchar() != '\\n');
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico2);
    while (getchar() != '\\n');

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

    //Exibição do resultado de nível mestre
    printf("Super Poder: %.2f \n", superPoder2);

    //Nível mestre
    //Exibição do comparativo das cartas
    //Apresentação de como o usuário poderá obter as informações do vencedor
    printf("Comparação de Cartas\n");
    printf("Carta 1 vence se o resultado for 1\n");
    printf("Carta 2 vence se o resultado for 0\n");
    printf("População: Carta vencedora: (%d)\n", populacao1 > populacao2);
    printf("Área: Carta vencedora: (%d)\n", area1 > area2);
    printf("PIB: Carta vencedora: (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta vencedora: (%d)\n", p_turistico1 > p_turistico2);
    printf("Densidade Populacional: Carta vencedora: (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta vencedora: (%d)\n", pib_capita1 > pib_capita2);
    printf("Super Poder: Carta vencedora: (%d)\n", superPoder1 > superPoder2);
        
    return 0;
}
    
