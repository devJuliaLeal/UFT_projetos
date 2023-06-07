#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int v[10], i;
    for (i = 0; i < 10; i++)
    {
        v[i] = 0;
    }
    v[9] = 101; // Atribuição ao último elemento do array

    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
