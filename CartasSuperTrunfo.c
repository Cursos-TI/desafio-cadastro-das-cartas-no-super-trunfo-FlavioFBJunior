#include <stdio.h>

int main() {
    // Atributos da primeira carta
    char codigo1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpc1;
    float super1;

    // Atributos da segunda carta
    char codigo2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpc2;
    float super2;

    // Entrada dos dados da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Calculos para as variáveis da densidade e PIB
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibpc1 = (float) (pib1*1000000000) / populacao1;
    pibpc2 = (float) (pib2*1000000000) / populacao2;
    
    //Calculo do super de cada carta
    super1 = populacao1+area1+pib1+pontosTuristicos1+(1/densidade1)+pibpc1;
    super2 = populacao2+area2+pib2+pontosTuristicos2+(1/densidade2)+pibpc2;

    //Declaração das variáveis dos resultados
    int res_populacao, res_area, res_pib, res_ptur, res_densidade, res_pibpc, res_super;

    //Comparações dos dados das cartas
    res_populacao = populacao1>populacao2;
    res_area = area1>area2;
    res_pib = pib1>pib2;
    res_ptur = pontosTuristicos1>pontosTuristicos2;
    res_densidade = densidade1<densidade2;
    res_pibpc = pibpc1>pibpc2;
    res_super = super1>super2;

    // Exibindo os dados da primeira carta
    printf("\n===== Dados da Primeira Carta =====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super: %.2f\n", super1);


    // Exibindo os dados da segunda carta
    printf("\n===== Dados da Segunda Carta =====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super: %.2f\n", super2);

    //Exibindo as comparações
    printf("\n===== Vamos aos resultados das comparações =====\n");
    printf("Lembrando que se o resultado der 1, a carta vencedora é a carta nº 1, caso contrário a vencedora é a carta nº 2.\n");
    printf("Resultado da comparação da população: %d\n", res_populacao);
    printf("Resultado da comparação da área: %d\n", res_area);
    printf("Resultado da comparação do PIB: %d\n", res_pib);
    printf("Resultado da comparação dos pontos turísticos: %d\n", res_ptur);
    printf("Resultado da comparação da densidade populacional: %d\n", res_densidade);
    printf("Resultado da comparação do PIB per capita: %d\n", res_pibpc);
    printf("Resultado da comparação do poder SUPER: %d\n", res_super);

    return 0;
}
