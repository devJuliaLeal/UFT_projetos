/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- BIBLIOTECAS ---*/


/*--- PROT�TIPO DAS FUN��ES ---*/

void asteriscos();
void sustenido();
void dolar();
void generica(char chr);
void generica2 (int num2);



/*--- PROT�TIPO DAS FUN��ES ---*/


/*---  FUN��O PRINCIPAL ---*/



/*---  FUN��O PRINCIPAL ---*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

unsigned numero;

    while(1){
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
        if(numero == 1) asteriscos();
        if(numero == 2) sustenido();
        if(numero == 3) dolar();
        if(numero == 4) arroba();
        if(numero == 5) generica('*');
        if(numero == 6) generica2(2);


        if(!numero) break;
    }







   return 0;

}

/*--- DESENVOLVIMENTO DAS FUN��ES ---*/

void asteriscos()

{
    char asts;
    for(asts=0; asts<10; asts++)
        putchar('*');
    putchar('\n');
}


void sustenido()

{
    char asts;
    for(asts=0; asts<10; asts++)
        putchar('#');
    putchar('\n');
}

void dolar()

{
    char asts;
    for(asts=0; asts<10; asts++)
        putchar('$');
    putchar('\n');
}
void arroba()

{
    char asts;
    for(asts=0; asts<10; asts++)
        putchar('@');
    putchar('\n');
}


void generica(char chr)
{
    int asts;
    for(asts=0; asts<10; asts++)
        putchar(chr);
    putchar('\n');

}

void generica2(int num2)
{
    int asts;
    for(asts=0; asts<num2; asts++)
        putchar('&');
    putchar('\n');

}






/*--- DESENVOLVIMENTO DAS FUN��ES ---*/
