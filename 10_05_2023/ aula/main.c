/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROT�TIPO DAS FUN��ES ---*/

void numeros();


/*--- PROT�TIPO DAS FUN��ES ---*/

/*---  FUN��O PRINCIPAL ---*/

/*---  FUN��O PRINCIPAL ---*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

unsigned numero;
int num2;

    while(1){
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
         numeros(num2);
        if(!numero) break;
    }

for ( ; ; )
   return 0;

}

/*--- DESENVOLVIMENTO DAS FUN��ES ---*/

void numeros()
{
    int num2;
    printf("Digite um numero:");
    scanf("%d", &num2);
    printf("+++++++++++++++++\n");
    printf("|\t\t|\n");
    printf("| N U M E R O %d |\n", num2);
    printf("|\t\t|\n");
    printf("+++++++++++++++++\n");
}





/*--- DESENVOLVIMENTO DAS FUN��ES ---*/
