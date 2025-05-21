#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>

int main() {
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB, escolha1, escolha2;
    float areaA, areaB, pibA, pibB;

    printf("Digite o nome da Cidade 1: ");
    scanf("%s", nomeA);
    printf("Digite a população da Cidade 1: ");
    scanf("%d", &populacaoA);
    printf("Digite a área da Cidade 1: ");
    scanf("%f", &areaA);
    printf("Digite o PIB da Cidade 1: ");
    scanf("%f", &pibA);

    printf("Digite o nome da Cidade 2: ");
    scanf("%s", nomeB);
    printf("Digite a população da Cidade 2: ");
    scanf("%d", &populacaoB);
    printf("Digite a área da Cidade 2: ");
    scanf("%f", &areaB);
    printf("Digite o PIB da Cidade 2: ");
    scanf("%f", &pibB);

    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Digite sua primeira escolha: ");
    scanf("%d", &escolha1);
    printf("Digite sua segunda escolha: ");
    scanf("%d", &escolha2);

    printf("\nComparando %s e %s:\n", nomeA, nomeB);

    printf("No atributo %d, ", escolha1);
    if ((escolha1 == 1 && populacaoA > populacaoB) || (escolha1 == 2 && areaA > areaB) || (escolha1 == 3 && pibA > pibB)) {
        printf("%s é melhor.\n", nomeA);
    } else if ((escolha1 == 1 && populacaoA < populacaoB) || (escolha1 == 2 && areaA < areaB) || (escolha1 == 3 && pibA < pibB)) {
        printf("%s é melhor.\n", nomeB);
    } else {
        printf("As cidades são iguais nesse atributo.\n");
    }

    printf("No atributo %d, ", escolha2);
    if ((escolha2 == 1 && populacaoA > populacaoB) || (escolha2 == 2 && areaA > areaB) || (escolha2 == 3 && pibA > pibB)) {
        printf("%s é melhor.\n", nomeA);
    } else if ((escolha2 == 1 && populacaoA < populacaoB) || (escolha2 == 2 && areaA < areaB) || (escolha2 == 3 && pibA < pibB)) {
        printf("%s é melhor.\n", nomeB);
    } else {
        printf("As cidades são iguais nesse atributo.\n");
    }

    return 0;
}

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
