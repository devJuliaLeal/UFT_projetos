#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

void initializeBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char board[SIZE][SIZE])
{
    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j != SIZE - 1)
            {
                printf("|");
            }
        }

        printf("\n");

        if (i != SIZE - 1)
        {
            for (int j = 0; j < SIZE; j++)
            {
                printf("---");
                if (j != SIZE - 1)
                {
                    printf("|");
                }
            }

            printf("\n");
        }
    }

    printf("\n");
}

bool isBoardFull(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }

    return true;
}

bool checkWin(char board[SIZE][SIZE], char player)
{
    // Verificar linhas
    for (int i = 0; i < SIZE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
    }

    // Verificar colunas
    for (int j = 0; j < SIZE; j++)
    {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
        {
            return true;
        }
    }

    // Verificar diagonais
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true;
    }

    return false;
}

void playGame()
{
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    while (true)
    {
        printf("Jogador %c, insira a posição (linha coluna): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Verifica se a posição é válida e está vazia
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            printBoard(board);

            if (checkWin(board, currentPlayer))
            {
                printf("Jogador %c venceu!\n", currentPlayer);
                break;
            }

            if (isBoardFull(board))
            {
                printf("Empate!\n");
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else
        {
            printf("Posição inválida. Tente novamente.\n");
        }
    }
}

int main()
{
    printf("Bem-vindo ao Jogo da Velha!\n");
    printf("Para jogar, digite as coordenadas (linha coluna) da posição desejada.\n");

    playGame();

    return 0;
}
