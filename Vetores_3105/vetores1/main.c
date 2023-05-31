
/* ============================================================================

    Linguagem C

    Vetores ou Arrays ou Matriz unidimensional

    Autor: Julia Leal
    Data:  24 de Maio de 2023


/* --- BIBLIOTECAS --- */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* --------------------------- MACROS ------------------------------- */


/* ---------------------PROTOTIPO DAS FUNCOES ------------------------ */
float TrueRMS(float volts[], int N);

/* ----------------------- VARIAVEIS GLOBAIS ------------------------- */





/* ---------------------- CONSTANTES --------------------------------- */



/* ---------------------- FUNCAO PRINCIPAL --------------------------- */

int main()
{

float vrms[5]= {1.5, 3.8, 4.9, 5.7, 2.1};


//float volts[3] = {1, 2, 3};



printf("%.4f", TrueRMS(vrms, 5));





}




/*------------------------DESENVOLVIMENTO DAS FUNCOES--------------------*/


float TrueRMS(float volts[], int N)
{

    register int i;
    float rms = 0.0;

    for(i=0; i<N; i++)
    volts[i] *= volts[i];

    for(i=0; i<N; i++)
    rms += volts[i];

    for(i=0; i<N; i++)
    rms /= N;


    return sqrt(rms);

}





