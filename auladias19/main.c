#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Autora : Julia Leal
Data: 19/04/2023


*/



int main()
{

setlocale(LC_ALL, "Portuguese_Brazil");
    char opt;

        do
        {
            printf("(a) Menus. \n");
            printf("(q) Quit. \n");
            printf("Opcao: ");
            scanf("%c", &opt);

            switch(opt)
            {
                case 'a': printf("Menus\n"); break;
                case 'q': printf("Saiu\n"); break;
                default: printf ("invalido\n");
            }
        }
    while (opt != 'q');
    return 0;
}
