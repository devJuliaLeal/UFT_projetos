/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*--- FINAL BIBLIOTECAS ---*/
/* ========================================================================= */
/* --- Macros --- */
#define multip(a,b) a*b


/* ========================================================================= */
/* --- FINAL Macros --- */


/*--- VARIAVEIS GLOBAIS ---*/
int valor =5,
    numero = 7;
    teste= 15;


/*--- FINAL DAS VARIAVEIS LOCAIS ---*/

/*--- PROTOTIPO DAS FUNCOES ---*/

int func();
void func2();



/*---FINAL PROTOTIPO DAS FUNCOES ---*/


/*---  FUN��O PRINCIPAL ---*/





int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");


//printf("Imprimindo resposta func = %d\n", func());

//printf("Imprimindo resposta func = %d\n", func());

//printf("Imprimindo resposta func = %d\n", func());




int valor[500]={} ;
valor[250]=30;
valor[500]=30;




printf("Valor  = %d\n",valor[0] );
printf("Valor  = %d\n",valor[1]);
printf("Valor  = %d\n",valor[250] );
printf("Valor  = %d\n",valor[3] );
printf("Valor  = %d\n",valor[500] );
printf("Valor  = %d\n",valor[600] );

//printf("%d\n", multip(6,2));

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
