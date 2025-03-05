#include <stdio.h>

int main(){
    
    // variaveis das carta 1 e 2
    char estado_1[20] ,estado_2[20];
    char codigo_da_carta_1[4], codigo_da_carta_2[4];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_em_km_1, area_em_km_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;


    
    printf("\ncarta 1: \n");

     // cadastro da carta 1 / coleta de dados
    printf("estado: ");
    scanf("%s", &estado_1);
    printf("código da carta: ");
    scanf("%s", &codigo_da_carta_1);
    printf("nome da cidade: ");
    getchar(); // para o fgets ser lido entre os scanf
    fgets(nome_da_cidade_1, 50, stdin); // usando fgets para dar espaço no nome da cidade
    printf("populacão: ");
    scanf("%d", &populacao_1);
    printf("Área km²: ");
    scanf("%f", &area_em_km_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

   
    printf("\ncarta 2: \n");

    //cadastro da carta 2 / coleta de dados
    printf("estado: ");
    scanf("%s", &estado_2);
    printf("código da carta: ");
    scanf("%s", &codigo_da_carta_2);
    printf("nome da cidade: ");
    getchar(); 
    fgets(nome_da_cidade_2, 50, stdin); 
    printf("populacão: ");
    scanf("%d", &populacao_2);
    printf("Área km²: ");
    scanf("%f", &area_em_km_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);


    // calculo da densidade populacional
    densidade_populacional1 = populacao_1 / area_em_km_1;
    densidade_populacional2 = populacao_2 / area_em_km_2;

    // calculo do pib per capita
    pib_per_capita1 = (pib_1 * 1000000000) / populacao_1; // multipliquei o pib pois ele nao estava dividindo pela populacao
    pib_per_capita2 = (pib_2 * 1000000000) / populacao_2;


    // exibindo os dados da carta 1
    printf("\n---- dados da carta 1 ----\n");
    printf("\n\nestado: %s \n", estado_1);
    printf("código da carta: %s\n", codigo_da_carta_1);
    printf("nome da cidade: %s", nome_da_cidade_1); // fgets ja inclui \n
    printf("populão: %d\n", populacao_1);
    printf("Área km²: %.2f km²\n", area_em_km_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_1);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capit: %.2f reais\n", pib_per_capita1);

    //exibindo os dados da carta 2
    printf("\n---- dados da carta 2 ----\n");
    printf("\n\nestado: %s \n", estado_2);
    printf("código da carta: %s\n", codigo_da_carta_2);
    printf("nome da cidade: %s", nome_da_cidade_2); // fgets ja inclui \n
    printf("populão: %d\n", populacao_2);
    printf("Área km²: %.2f km²\n", area_em_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_2);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capit: %.2f reais\n", pib_per_capita2);

    
    
    return 0;
}