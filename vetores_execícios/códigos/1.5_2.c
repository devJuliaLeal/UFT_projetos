#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*==================================================================================*/

    int i;
    int v[5] = {10, 20, 30, 40, 50};

    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
