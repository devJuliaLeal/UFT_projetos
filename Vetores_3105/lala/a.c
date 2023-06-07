/*Universidade Federal do Tocantins
  Campus de Palmas
  Aluno: Vitor Leal
  Professor: Wosley Arruda */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// criptografando //

void Vitor (unsigned char vetor[], int tamanho){
  for (int i = 0;i < tamanho; i++) {
    if (i % 2 == 0) {

        vetor[i] +=5;
    }  else {
            vetor[i] -=3;
    }

  }
}

// descriptografar //


 void Ferreira(unsigned char vetor[], int tamanho) {
   for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 0) {
        vetor[i] -=5;
    } else {
      vetor[i] -=3;
    }

   }
 }


 // imprimir os bytes//
 void imprimir(unsigned char vetor[], int tamanho) {
 for (int i=0; i < tamanho; i++) {
    printf("0x%02X", vetor[i]);

     }

   printf("\n");
 }

int main()
{
    int tamanho = 5;
    printf("Insira o tamanho do vetor: \n");
    scanf("%d", &tamanho);


    unsigned char vetor[tamanho];

    printf("Insira os valores dos bytes em hexadecimal: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Byte %d: ", i+1);
        scanf("%hhx", &vetor[i]);
    }

    printf("Vetor orignal: \n ");
    imprimir(vetor, tamanho);

    Vitor(vetor, tamanho);
    printf("Vetor cripitografado: \n");
    imprimir(vetor, tamanho);

    Ferreira(vetor, tamanho);
    printf("Vetor Descripitografado: \n");
    imprimir(vetor, tamanho);

    system ("PAUSE");
    return 0;

}
