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
#define multip(a,b) a*b


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

