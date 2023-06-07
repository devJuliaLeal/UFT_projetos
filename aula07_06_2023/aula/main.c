#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,
    j,
    linhas,
    colunas,
    aux,
    numero,
    totallinhas,
    totalcolunas
    ;



    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    printf("Digite o numero de numero: ");
    scanf("%d", &numero);




    int matriz[4][6]={0};



    for(i=1; i<4; i++){
        for(j=1; j<6; j++ ){

            if(i==linhas && j==colunas){
                 printf("%3d", matriz[i][j]= numero);
            }
            else{
                 printf("%3d", matriz[i][j]);
            }


        }

        printf("\n");
    }










}



/*int i,
    j;

   int mat[100][100] = {{5, 6, 10, 13},
                    {0, 15, 62, 98},
                    {11, 5, 7, 71}};








for(i=1; i<3; i++){
    for(j=0; j<4; j++)
    {
        printf("%d", mat[i][j]);
        putchar("\n");
    }
     printf("\n");
}*/
