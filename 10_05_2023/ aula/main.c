/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROT�TIPO DAS FUN��ES ---*/

float frequencia(int ra, int rb, int c);


/*--- PROT�TIPO DAS FUN��ES ---*/



/*---  FUN��O PRINCIPAL ---*/

/*---  FUN��O PRINCIPAL ---*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

int ra, rb, c;

    printf("Digite ra: \n");
    scanf("%d", &ra);


    printf("Digite rb: \n");
    scanf("%d", &rb);

    printf("Digite c: \n");
    scanf("%d", &c);

float resultado = frequencia(ra, rb, c);

printf("resultado : %f\n" , resultado);


   return 0;

}

/*--- DESENVOLVIMENTO DAS FUN��ES ---*/

float frequencia(int ra, int rb, int c)
{
    int f=0;
    return f = (1.44)/(ra + 2*rb) * c;
}




/*--- DESENVOLVIMENTO DAS FUN��ES ---*/
