/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*--- FINAL BIBLIOTECAS ---*/

/* ========================================================================= */
/* --- Constantes --- */
#define N 2
#define pi 3.141592653589793



/* ========================================================================= */
/* --- FINAL Constantes --- */

/* ========================================================================= */
/* --- Macros --- */
//#define multip(a,b) a*b
#define ativos 5


/* ========================================================================= */
/* --- FINAL Macros --- */


/*--- VARIAVEIS GLOBAIS ---*/
int num =5;



/*--- FINAL DAS VARIAVEIS LOCAIS ---*/

/*--- PROTOTIPO DAS FUNCOES ---*/

int func();
void func2();



/*---FINAL PROTOTIPO DAS FUNCOES ---*/


/*---  FUN��O PRINCIPAL ---*/





int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");


float
    valor[ativos],
    total=0.0,
    subto[ativos],
    aporte;
int qtd[ativos],
    i;




printf("Digite o valor do aporte:");
scanf(" %f", &aporte);


for(i=0; i<ativos; i++)
{

    printf("Digite o ativo:\n" );
    scanf("%f", &valor[i]);

    printf("Digite a quatidade\n");
    scanf(" %f", &qtd[i]);



  }

for(i=0; i<ativos; i++)
    subto[i] = valor[i]*qtd[i];


for(i=0; i<ativos; i++)
    total += subto[i];

printf("%f", total);



    return 0;

}
/*--- FINAL FUNCAO PRINCIPAL ---*/


/*--- DESENVOLVIMENTO DAS FUNCOES ---*/

int func()
{

    static int var =10;
    var++;
    return var;


}

void func2()
{
     int i;
    for(i=0;i<8;i++)
        printf("hello\n");
}

/*--- FINAL DESENVOLVIMENTO DAS FUNCOES ---*/

