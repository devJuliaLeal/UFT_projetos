/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROT�TIPO DAS FUN��ES ---*/

void div_rest(int a, int b);


/*--- PROT�TIPO DAS FUN��ES ---*/

/*---  FUN��O PRINCIPAL ---*/

/*---  FUN��O PRINCIPAL ---*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

int num1, num2;

    while(1)

    {

        printf("Entre com valor\n");
        scanf("%d", &num1);

        printf("Entre com valor\n");
        scanf(" %d", &num2);

       div_rest(num1, num2);

    }



   return 0;

}

/*--- DESENVOLVIMENTO DAS FUN��ES ---*/

void div_rest(int a, int b)
{
    printf("divis�o = %d\n", a/b);
    printf("resto = %d\n", a%b);

}





/*--- DESENVOLVIMENTO DAS FUN��ES ---*/
