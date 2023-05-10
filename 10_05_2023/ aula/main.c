/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROTÓTIPO DAS FUNÇÕES ---*/

void numeros();


/*--- PROTÓTIPO DAS FUNÇÕES ---*/

/*---  FUNÇÃO PRINCIPAL ---*/

/*---  FUNÇÃO PRINCIPAL ---*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

unsigned numero;
int num2;

    while(1){
        printf("Digite um número: ");
        scanf("%d", &numero);
         numeros(num2);
        if(!numero) break;
    }

for ( ; ; )
   return 0;

}

/*--- DESENVOLVIMENTO DAS FUNÇÕES ---*/

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





/*--- DESENVOLVIMENTO DAS FUNÇÕES ---*/
