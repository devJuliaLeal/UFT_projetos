/*--- BIBLIOTECAS ---*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*--- FINAL BIBLIOTECAS ---*/


/*--- PROT�TIPO DAS FUN��ES ---*/

float frequencia(int ra, int rb, int c);


/*---FINAL PROT�TIPO DAS FUN��ES ---*/



/*---  FUN��O PRINCIPAL ---*/





int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");
int num1, num2, num3;

printf("Digite um numero\n"); scanf("%d", &num1);
printf("Digite um numero\n"); scanf(" %d", &num2);
printf("Digite um numero\n"); scanf(" %d", &num3);
printf("resultado : %.2f\n" , frequencia(num1, num2, num3));

    return 0;

}
/*--- FINAL FUN��O PRINCIPAL ---*/


/*--- DESENVOLVIMENTO DAS FUN��ES ---*/

float frequencia(int ra, int rb, int c)
{
    return 1.44/((ra + 2*rb) * c);
}




/*--- FINAL DESENVOLVIMENTO DAS FUN��ES ---*/
