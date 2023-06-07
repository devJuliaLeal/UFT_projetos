
/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ========================================================================= */
/* --- Constantes --- */
#define MAX 30 /* número de ativos para fazer o aporte */

/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int v[MAX];
    int i; // Declaração da variável i

    for (i = 0; i < 30; i++)
        v[i] = 0;
    v[i] = 101;

    for (i = 0; i < 30; i++)
    {
        printf("%d ", v[i]);
    }

    system("PAUSE");
    return 0;
}
