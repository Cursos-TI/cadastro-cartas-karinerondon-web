#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
char Cidade[20];
char Estado[50];
char Codigo[20];
int Populacao;
int PontosTuristicos;
float Area;
float PIB; 

printf ("Digite Cidade: \n");
scanf("%s", &Cidade);

printf("Digite Estado: \n");
scanf("%s", &Estado);

printf("Digite Codigo: \n");
scanf("%s", &Codigo);

printf("Digite Populacao: \n");
scanf("%d", &Populacao);

printf("Digite PontosTurusticos: \n");
scanf("%d", &PontosTuristicos);

printf("Digite Area; \n");
scanf("%f", &Area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);


return 0;
} 
