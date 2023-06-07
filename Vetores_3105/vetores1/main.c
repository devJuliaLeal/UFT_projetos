#include <stdio.h>


int main() {
    unsigned int dados[] = {0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE};
    int tamanho = sizeof(dados) / sizeof(dados[0]);

    printf("Dados de entrada: ");
    imprimeDadosHexa(dados, tamanho);

    processaDadosHexa(dados, tamanho);

    printf("Dados de saída: ");
    imprimeDadosHexa(dados, tamanho);

    return 0;
}
unsigned int somaCinco(unsigned int num) {
    return num + 5;
}

unsigned int subtraiTres(unsigned int num) {
    return num - 3;
}




void processaDadosHexa(unsigned int *dados, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            dados[i] = somaCinco(dados[i]);
        } else {
            dados[i] = subtraiTres(dados[i]);
        }
    }
}

void imprimeDadosHexa(unsigned int *dados, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("0x%X ", dados[i]);
    }
    printf("\n");
}



