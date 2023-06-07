#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*==========================prototipos==============================*/

void julia(unsigned char *bytes, int tamanho);
void assuncao(unsigned char *bytes, int tamanho);

/*==============================main================================*/

int main()
{

setlocale(LC_ALL, "Portuguese");

int tamanho = 0;
int i,
    byte;

    unsigned char bytes[1000];
    char op;

    printf("Digite os bytes (digite um caracter especial parar): ");

    while (scanf("%x", &byte) == 1)
    {
        bytes[tamanho++] = byte;
    }



    getchar();


    printf("Digite 'c' para criptografar ou 'd' para descriptografar: ");
    scanf(" %c", &op);

    if (op == 'c')
    {
        julia(bytes, tamanho);
        printf("Bytes criptografados: ");
    }

    else if (op == 'd')
    {

        assuncao(bytes, tamanho);
        printf("Bytes descriptografados: ");
    }
    else
    {
        printf("Opção inválida!\n");
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("0x%02X ", bytes[i]);
    }

    putchar('\n');

    return 0;
}

/*==============================funcoes================================*/

void julia(unsigned char *bytes, int tamanho)
{
    int j;

    for (j = 0; j < tamanho; j++)
    {
        if (j % 2 == 0)
        {
            bytes[j] += 5;
        }
        else
        {
            bytes[j] -= 3;
        }
    }
}

void assuncao(unsigned char *bytes, int tamanho)
{
    int f;
    for (f = 0; f < tamanho; f++)
    {

        if (f % 2 == 0)
        {
            bytes[f] -= 5;
        }

        else
        {
            bytes[f] += 3;
        }
    }
}
