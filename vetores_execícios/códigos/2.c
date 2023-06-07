#include <stdio.h>

float max(float v[], int n) {
    float max_num = v[0];  // Inicializa o maior número como o primeiro elemento do vetor

    for (int i = 1; i < n; i++) {
        if (v[i] > max_num) {
            max_num = v[i];  // Atualiza o maior número se encontrar um valor maior no vetor
        }
    }

    return max_num;
}

int main() {
    float vetor[] = {3.14, 2.718, 1.414, 2.236, 0.707};
    int tamanho = 5;

    float maior = max(vetor, tamanho);
    printf("O maior número entre os %d primeiros elementos é: %.3f\n", tamanho, maior);

    return 0;
}

