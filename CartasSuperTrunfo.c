#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 01 e 02
  char estado1, estado2;
  char codigoCarta1[5], codigoCarta2[5];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int turismo1, turismo2;

  // Área para entrada de dados

  // ENTRADA DE DADOS: CARTA 1
    printf("Cadastro da Carta 1\n");

    // 1. Lendo o Estado
    printf("Digite o estado escolhido (de A a H): ");
    scanf(" %c", &estado1); // Char usam %c e precisam do '&'

    // 2. Lendo o Código da Carta
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1); // Strings usam %s e não precisam do '&'

    // 3. Lendo o Nome da Cidade (sem espaços)
    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", cidade1);

    // 4. Lendo a População
    printf("Digite a populacao: ");
    scanf("%d", &populacao1); // Inteiros usam %d e precisam do '&'

    // 5. Lendo a Área
    printf("Digite a Area: ");
    scanf("%f", &area1); // Float usam %f e precisam do '&'

    // 6. Lendo o PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1); // Float usam %f e precisam do '&'

    // 7. Lendo os Pontos Turisticos
    printf("Digite o Ponto turiscico (sem espacos): ");
    scanf("%d", &turismo1); // Inteiros usam %d e precisam do '&'

    // ENTRADA DE DADOS: CARTA 2
    printf("Cadastro da Carta 2\n");

    // 1. Lendo o Estado
    printf("Digite o estado escolhido (de A a H): ");
    scanf(" %c", &estado2); // Char usam %c e precisam do '&'

    // 2. Lendo o Código da Carta
    printf("Digite o codigo da carta (ex: A02): ");
    scanf("%s", codigoCarta2); // Strings usam %s e não precisam do '&'

    // 3. Lendo o Nome da Cidade (sem espaços)
    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", cidade2);

    // 4. Lendo a População
    printf("Digite a populacao: ");
    scanf("%d", &populacao2); // Inteiros usam %d e precisam do '&'

    // 5. Lendo a Área
    printf("Digite a Area: ");
    scanf("%f", &area2); // Float usam %f e precisam do '&'

    // 6. Lendo o PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2); // Float usam %f e precisam do '&'

    // 7. Lendo os Pontos Turisticos
    printf("Digite o Ponto turiscico (sem espacos): ");
    scanf("%d", &turismo2); // Inteiros usam %d e precisam do '&'
  
  // Área para exibição dos dados da cidade

  // Carta 01
  printf("Carta 01\n");

  // Mostrando um char (%c)
  printf("Estado: %c\n", estado1);

  // Mostrando um string (%s)
  printf("Codigo: %s\n", codigoCarta1);

  // Mostrando um string (%s)
  printf("Cidade: %s\n", cidade1);

  // Mostrando um inteiro (%d)
  printf("Populacao: %d\n", populacao1);

  // Mostrando um float com 2 casas decimais (%2f)
  printf("Area: %.2f km²\n", area1);

  // Mostrando um float com 2 casas decimais (%2f)
  printf("PIB: %.2f Bilhoes de Reais\n", pib1);

  // Mostrando um inteiro (%d)
  printf("Numero de pontos turisticos: %d\n", turismo1);

  // Carta 02
  printf("Carta 02\n");

  // Mostrando um char (%c)
  printf("Estado: %c\n", estado2);

  // Mostrando um string (%s)
  printf("Codigo: %s\n", codigoCarta2);

  // Mostrando um string (%s)
  printf("Cidade: %s\n", cidade2);

  // Mostrando um inteiro (%d)
  printf("Populacao: %d\n", populacao2);

  // Mostrando um float com 2 casas decimais (%2f)
  printf("Area: %.2f km²\n", area2);

  // Mostrando um float com 2 casas decimais (%2f)
  printf("PIB: %.2f Bilhoes de Reais\n", pib2);

  // Mostrando um inteiro (%d)
  printf("Numero de pontos turisticos: %d\n", turismo2);
  
return 0;
} 
