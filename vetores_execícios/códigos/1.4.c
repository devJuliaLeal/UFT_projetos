#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int v[10]; // Definindo o tamanho do array v como 10
    int i;
    for (i = 0; i < 10; i++)
        v[i] = 0;
    v[9] = 101; // Atribuindo o valor 101 ao último elemento do array v

    for (i = 0; i < 10; i++) // Alterei o limite do loop para 10 para percorrer todos os elementos do array v
    {
        printf("%d ", v[i]);
    }

    return 0;
}
