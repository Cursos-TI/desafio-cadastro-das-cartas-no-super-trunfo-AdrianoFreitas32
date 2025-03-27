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
    int carta = 01;
    char Estado = "MT";
    char codigo = "MT01";
    char cidade = "tangara da serra";
    int populaçao = 150.000;
    float Area = 1250;
    
    float PIB = 556.270;
    int pontosturisticos = 5;
    
    int carta = 02;
    char Estado[15] = "MT";
    char codigo[15] = "MT02";
    char cidade[15] = 'nova olimpia';
    int populaçao = 25.000;
    float Area = 250;
    float PiB = 56.780;
    int pontosturisticos = 8;

    printf("codigo da carta %s é: %d\n", codigo);

    
    return 0;
}
