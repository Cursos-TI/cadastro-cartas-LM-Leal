#include <stdio.h>

int main() {
    // Área para definição das variáveis
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char cidade1[20], cidade2[20];
    
    // População como unsigned long int conforme a exigência do nível
    unsigned long int populacao1, populacao2; 
    
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado escolhido (de A a H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1); 

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); 

    printf("Digite a Area: ");
    scanf("%f", &area1); 

    printf("Digite o PIB: ");
    scanf("%f", &pib1); 

    printf("Digite o Ponto turistico (sem espacos): ");
    scanf("%d", &turismo1); 

    // Processamento de Dados Carta 1 (Sem multiplicadores extras)
    float densidadePopulacao1 = (float) populacao1 / area1;  
    float pibPerCapta1 = pib1 / (float) populacao1;
    
    // Cálculo do Super Poder armazenado como float
    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) turismo1 + pibPerCapta1 + (1.0f / densidadePopulacao1);


    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado escolhido (de A a H): ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (ex: A02): ");
    scanf("%s", codigoCarta2); 

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); 

    printf("Digite a Area: ");
    scanf("%f", &area2); 

    printf("Digite o PIB: ");
    scanf("%f", &pib2); 

    printf("Digite o Ponto turistico (sem espacos): ");
    scanf("%d", &turismo2); 

    // Processamento de dados da Carta 2 (Sem multiplicadores extras)
    float densidadePopulacao2 = (float) populacao2 / area2;
    float pibPerCapta2 = pib2 / (float) populacao2;
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) turismo2 + pibPerCapta2 + (1.0f / densidadePopulacao2);
  

    // --- ÁREA DE COMPARAÇÃO (APENAS OPERADORES RELACIONAIS) ---
    printf("\nComparação de Cartas:\n");
    
    // Comparação simples retornando 1 ou 0 nativamente
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    
    // Regra especial: Na densidade populacional, a carta com o MENOR valor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacao1 < densidadePopulacao2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapta1 > pibPerCapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
  
    return 0;
}A