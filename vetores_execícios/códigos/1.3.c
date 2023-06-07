#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int i;
    int v[5];
    for (i = 0; i < 5; i++)
        v[i] = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
