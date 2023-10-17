#include <iostream>

#include <cstdio>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\n Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibir a matriz
    printf("\n A matriz digitada é:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\t %d ", matriz[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
