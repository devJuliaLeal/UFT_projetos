#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");

    int num1=0, num2=0;

    num1 = num1 + 1;

    printf("num1 = %2d\n", num1);

    num2 += 1;

    printf("num2 = %2d\n", num2);

    if(num1 == num2)
        printf("As atibui��es s�o iguais\n");
        else
            printf("N�o s�o iguais");



int num3=0, num4=0;

    num3 = num3 - 1;

    printf("num3 = %2d\n", num3);

    num4 -= 1;

    printf("num4 = %2d\n", num4);

    if(num3 == num4)
        printf("As atibui��es s�o iguais");
        else
            printf("N�o s�o iguais");






}
