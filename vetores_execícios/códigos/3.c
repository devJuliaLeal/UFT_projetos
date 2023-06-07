#include <stdio.h>

#define MAX 3

void transpor(int v[MAX][MAX])
{
    int i, j, temp;

    for (i = 0; i < MAX; i++)
    {
        for (j = i + 1; j < MAX; j++)
        {
            // Troca o elemento da posição (i, j) com o elemento da posição (j, i)
            temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

int main()
{
    int matriz[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matriz original:\n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    transpor(matriz);

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
