#include <stdio.h>
#include <stdlib.h>


/*
Autora : Julia Leal
Data: 19/04/2023


*/



int main()
{

    unsigned a, b, c, d;

    printf("a=");
    scanf("%d", &a);


    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%d", &c);

    printf("d=");
    scanf("%d", &d);

    printf("valores originais: \n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c= %d\n", c);
    printf("d = %d\n", d);

    a++;
    b--;
    c = a;
    d = c + b;
    int soma = a+b+c+d;


    printf("valores atuais: \n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c= %d\n", c);
    printf("d = %d\n", d);








}
