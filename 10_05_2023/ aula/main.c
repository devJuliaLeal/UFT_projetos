/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROTÓTIPO DAS FUNÇÕES ---*/

float frequencia(int ra, int rb, int c);


/*--- PROTÓTIPO DAS FUNÇÕES ---*/



/*---  FUNÇÃO PRINCIPAL ---*/

/*---  FUNÇÃO PRINCIPAL ---*/



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

/*--- DESENVOLVIMENTO DAS FUNÇÕES ---*/

float frequencia(int ra, int rb, int c)
{
    int f=0;
    return f = (1.44)/(ra + 2*rb) * c;
}




/*--- DESENVOLVIMENTO DAS FUNÇÕES ---*/
