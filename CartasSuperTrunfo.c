#include <stdio.h>


int main() {
    // variaveis das carta 1 e 2
    char estado_1[20] ,estado_2[20];
    char codigo_da_carta_1[4], codigo_da_carta_2[4];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_em_km²_1, area_em_km²_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // cadastro da carta 1
    printf("carta 1: \n");

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
    scanf("%f", &area_em_km²_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    // dados da carta 1
    printf("estado: %s \n", estado_1);
    printf("código da carta: %s\n", codigo_da_carta_1);
    printf("nome da cidade: %s", nome_da_cidade_1); // fgets ja inclui \n
    printf("populão: %d\n", populacao_1);
    printf("Área km²: %.2f\n", area_em_km²_1);
    printf("PIB: %.2f\n", pib_1);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_1);

    // cadastro da carta 2
    printf("carta 2: \n");

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
    scanf("%f", &area_em_km²_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);

    // dados da carta 2
    printf("estado: %s \n", estado_2);
    printf("código da carta: %s\n", codigo_da_carta_2);
    printf("nome da cidade: %s", nome_da_cidade_2);
    printf("populão: %d\n", populacao_2);
    printf("Área km²: %.2f\n", area_em_km²_2);
    printf("PIB: %.2f\n", pib_1);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_2);
    

    return 0;
}
