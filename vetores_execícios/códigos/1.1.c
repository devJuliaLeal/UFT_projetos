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

    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
