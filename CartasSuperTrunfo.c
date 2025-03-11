#include <stdio.h>
#include <string.h>

int main(){
    
    // variaveis das carta 1 e 2
    char estado_1[20] ,estado_2[20];
    char codigo_da_carta_1[4], codigo_da_carta_2[4];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
    float area_em_km_1, area_em_km_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int opcao;

    
    printf("\ncarta 1: \n");

     // cadastro da carta 1 / coleta de dados
    printf("estado: ");
    scanf("%s", &estado_1);
    printf("código da carta: ");
    scanf("%s", &codigo_da_carta_1);
    printf("nome da cidade: ");
    getchar();   // limpar o buffer
    fgets(nome_da_cidade_1, 50, stdin); // usando fgets para dar espaço no nome da cidade
    nome_da_cidade_1[strcspn(nome_da_cidade_1, "\n")] = '\0'; // Remove o '\n' no final da string
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
    getchar(); // para limpar o buffer 
    fgets(nome_da_cidade_2, 50, stdin); // usando fgets para dar espaço no nome da cidade
    nome_da_cidade_2[strcspn(nome_da_cidade_2, "\n")] = '\0'; // Remove o '\n' no final da string
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

    // calculo do super poder
    super_poder1 = (area_em_km_1 + pib_1 + pib_per_capita1 + (1 / densidade_populacional1) + pontos_turisticos_1);
    super_poder2 = (area_em_km_2 + pib_2 + pib_per_capita2 + (1 / densidade_populacional2) + pontos_turisticos_2);

    // exibindo os dados da carta 1 / saida de dados
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
    printf("o super poder e de %.2f", super_poder1);

    //exibindo os dados da carta 2 / saida de dados
    printf("\n---- dados da carta 2 ----\n");
    
    printf("\n\nestado: %s \n", estado_2);
    printf("código da carta: %s\n", codigo_da_carta_2);
    printf("nome da cidade: %s", nome_da_cidade_2); // fgets ja inclui \n
    printf("populão: %d\n", populacao_2);
    printf("Área km²: %.2f km²\n", area_em_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_2);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capit: %.2f reais\n", pib_per_capita2);
    printf("o super poder e de %.2f", super_poder2);

    // escolha de opções para comparação de cartas
    printf("\n\n---- Conparação de Atributos ----\n");
    printf("1. população\n");
    printf("2. Área km²\n");
    printf("3. PIB\n");
    printf("4. pontos turisticos\n");
    printf("5. densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. super poder\n");
    printf("escolha uma opção: ");
    scanf("%d", &opcao);

    // switch com cada opção para escolher
    switch (opcao){
    case 1:  
    if (populacao_1 > populacao_2){
        printf("você escolheu o atributo: população.\n");
        printf("Carta 1 - %s (%s): %d\n", nome_da_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%s): %d\n", nome_da_cidade_2, estado_2, populacao_2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (populacao_2 > populacao_1) {
        printf("você escolheu o atributo: população.\n");
        printf("Carta 1 - %s (%s): %d\n", nome_da_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%s): %d\n", nome_da_cidade_2, estado_2, populacao_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: população.\n");
        printf("Carta 1 - %s (%s): %d\n", nome_da_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%s): %d\n", nome_da_cidade_2, estado_2, populacao_2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 2:
    if (area_em_km_1 > area_em_km_2){
        printf("você escolheu o atributo: Área km².\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, area_em_km_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, area_em_km_2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if ( area_em_km_2 > area_em_km_1) {
        printf("você escolheu o atributo: Área km².\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, area_em_km_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, area_em_km_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: Área km².\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, area_em_km_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, area_em_km_2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 3:
    if (pib_1 > pib_2) {
        printf("você escolheu o atributo: PIB.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2,pib_2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (pib_2 > pib_1) {
        printf("você escolheu o atributo: PIB.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, pib_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: PIB.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, pib_2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 4:
    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("você escolheu o atributo: pontos turisticos.\n");
        printf("Carta 1 - %s (%s): %d\n", nome_da_cidade_1, estado_1, pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_da_cidade_2, estado_2, pontos_turisticos_2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (pontos_turisticos_2 > pontos_turisticos_1) {
        printf("você escolheu o atributo: pontos turisticos.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, pontos_turisticos_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: pontos turisticos.\n");
        printf("Carta 1 - %s (%s): %d\n", nome_da_cidade_1, estado_1, pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_da_cidade_2, estado_2, pontos_turisticos_2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 5:
    if (densidade_populacional1 < densidade_populacional2) {
        printf("você escolheu o atributo: densidade populacional quem tiver a menor vence.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2,densidade_populacional2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("você escolheu o atributo: densidade populacional quem tiver a menor vence.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, densidade_populacional2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: densidade populacional.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, densidade_populacional2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 6:
    if (pib_per_capita1 > pib_per_capita2) {
        printf("você escolheu o atributo: PIB per capita.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2,pib_per_capita2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("você escolheu o atributo: PIB per capita.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, pib_per_capita2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: PIB per capita.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, pib_per_capita2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    case 7:
    if (super_poder1 > super_poder2) {
        printf("você escolheu o atributo: super poder.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, super_poder1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2,super_poder2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (super_poder2 > super_poder1) {
        printf("você escolheu o atributo: super poder.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, super_poder1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, super_poder2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("você escolheu o atributo: super poder.\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_da_cidade_1, estado_1, super_poder1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_da_cidade_2, estado_2, super_poder2);
        printf("Resultado: As Cartas Empataram!\n");
    }
        break;
    default:
    printf("opção invalida, escolha outra\n");
    break;
}

    

    return 0;
}