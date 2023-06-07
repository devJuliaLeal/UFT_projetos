#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int i;
    int v[5] = {10, 20, 30, 40, 50}; // O tamanho do array v é definido como 5 e são atribuídos valores iniciais

    for (i = 0; i < 5; i++) // O limite do loop é alterado para 5 para percorrer todos os elementos do array v
        v[i] = 0;
    v[4] = 101; // É atribuído o valor 101 ao último elemento do array v (índice 4)

    for (i = 0; i < 5; i++) // O limite do loop é alterado para 5 para percorrer todos os elementos do array v
    {
        printf("%d ", v[i]);
    }

    return 0;
}
