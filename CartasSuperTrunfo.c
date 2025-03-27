#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("carta super trunfo!!!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int carta1;
    char Estado;
    char codigo;
    char cidade;
    int populaçao;
    float Area;
    
    float PIB;
    int pontosturisticos;
    
    int carta2;
    char Estado[15];
    char codigo[15];
    char cidade[15];
    int populaçao;
    float Area;
    float PiB;
    int pontosturisticos;


    printf("codigo da carta %s é:\n", codigo);
    carta1 = 01;
    Estado = MT;
    codigo = MT01;
    cidade = tangara da serra;
    populaçao = 150.000;
    Area = 1250;
    PIB = 556.270;
    pontosturisticos = 5;

    carta2 = 02;
    codigo = MT02;
    cidade = nova olimpia;
    populaçao = 25.000;
    Area = 250;
    PiB = 56.780;
    pontosturisticos = 8;

    return 0;
}
