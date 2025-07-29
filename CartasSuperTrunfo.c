#include <stdio.h>
#include <string.h>

int main() {
    
    //declaração das variáveis
    char letra_estado1, letra_estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao1, populacao2;
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

    //Lógica para obtenção das informações da carta 2
    printf("Agora a Carta 2! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%s", &letra_estado2);
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

    //Exibição do comparativo das cartas
    //implementando a lógica com switch case

    //Variáveis para receber o valor digitado pelo usuário.
    int primeiroAtributo;
    int segundoAtributo;

    //Menu de exibição com os dados que serão usados para a primeira comparação.
    printf("Seja Bem-vindo ao Jogo Super Trunfo - Países!\n");
    printf("Escolha o primeiro atributo para comparar as cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica \n");
    printf("Digite o número do primeiro atributo: \n ");
    scanf("%d", &primeiroAtributo);

    if (primeiroAtributo > 5 ) //Verifica se o usuário digitou um número diferente das opções
    {
        printf("Selecione um número válido! \n");
    } else {
        switch (primeiroAtributo)
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
        printf("A Carta 2 da cidade %s possui %.2f km²\n", nome_cidade2, area2);

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
        printf("Resultado do comparativo da Densidade Demográfica entre %s e %s \n", nome_cidade1, nome_cidade2);
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
        }
    }

    //Menu de exibição com os dados que serão usados para a segunda comparação.
    printf("Escolha o segundo atributo para comparar as cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica \n");
    printf("Digite o número do segundo atributo: \n ");
    scanf("%d", &segundoAtributo);

    if (segundoAtributo > 5 )
    {
        printf("Selecione um número válido! \n");
    } else if (segundoAtributo == primeiroAtributo)
    {
        printf("Você selecionou o mesmo atributo. Escolha um atributo diferente!\n");
    } else {
        switch (segundoAtributo)
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
        printf("A Carta 2 da cidade %s possui %.2f km²\n", nome_cidade2, area2);

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
        printf("Resultado do comparativo da Densidade Demográfica entre %s e %s \n", nome_cidade1, nome_cidade2);
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
        }
    }

    //definindo o vencedor da rodada
    printf("Vammos agora descobrir o vencedor da rodada!\n");
    printf("Ganha a carta com o maior valor da soma dos atributos\n");

    //criando variáveis
    int somaCarta1;
    int somaCarta2;
    char *resultado;

    if(primeiroAtributo > 5 && segundoAtributo > 5){
        printf("Você selecionou uma opção inválida!\n");
    } else if(primeiroAtributo == 1 || 2 && segundoAtributo == 1 || 2){
        somaCarta1 = (float) populacao1 + area1;
        somaCarta2 = (float) populacao2 + area2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 1 || 3 && segundoAtributo == 1 || 3){
        somaCarta1 = (float) populacao1 + pib1;
        somaCarta2 = (float) populacao2 + pib2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 1 || 4 && segundoAtributo == 1 || 4){
        somaCarta1 = populacao1 + p_turistico1;
        somaCarta2 = populacao2 + p_turistico2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 1 || 5 && segundoAtributo == 1 || 5){
        somaCarta1 = (float) populacao1 + densidade1;
        somaCarta2 = (float) populacao2 + densidade2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 2 || 3 && segundoAtributo == 2 || 3){
        somaCarta1 = area1 + pib1;
        somaCarta2 = area2 + pib2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 2 || 4 && segundoAtributo == 2 || 4){
        somaCarta1 = (float) area1 + p_turistico1;
        somaCarta2 = (float) area2 + p_turistico2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 2 || 5 && segundoAtributo == 2 || 5){
        somaCarta1 = area1 + densidade1;
        somaCarta2 = area2 + densidade2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 3 || 4 && segundoAtributo == 3 || 4){
        somaCarta1 = (float) p_turistico1 + pib1;
        somaCarta2 = (float) p_turistico2 + pib2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 3 || 5 && segundoAtributo == 3 || 5){
        somaCarta1 = densidade1 + pib1;
        somaCarta2 = densidade2 + pib2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (primeiroAtributo == 4 || 5 && segundoAtributo == 4 || 5){
        somaCarta1 = (float) p_turistico1 + densidade1;
        somaCarta2 = (float) p_turistico2 + densidade2;
        resultado = (somaCarta1 > somaCarta2) ? "Carta 1 Ganhou a Rodada!" : "Carta 2 Ganhou a rodada";
        printf("%s\n", resultado);
    } else if (somaCarta1 == somaCarta2) {
        printf("Empate!\n");
    };
    
   
    return 0;  
}