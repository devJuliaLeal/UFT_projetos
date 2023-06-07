#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,
    j;

   int mat[3][4] = {{5, 6, 10, 13},
                    {0, 15, 62, 98},
                    {11, 5, 7, 71}};

for(i=0; i<3; i++){
    for(j=0; j<4; j++)
    {
        printf("%d", mat[i][j]);
        putchar("\n");
    }
     printf("\n");
}





}
