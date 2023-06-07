#include <stdio.h>

char *memepy(char *dest, const char *orig, int n)
{
    char *dest_ptr = dest;
    const char *orig_ptr = orig;

    while (n > 0)
    {
        *dest_ptr = *orig_ptr;

        dest_ptr++;
        orig_ptr++;
        n--;
    }

    return dest;
}

int main()
{
    char orig[] = "Hello, World!";
    char dest[6]; // Vetor de destino com tamanho suficiente para armazenar "Hello"

    memepy(dest, orig, 5);
    dest[5] = '\0'; // Adiciona o caractere nulo de término de string

    printf("Vetor de destino: %s\n", dest);

    return 0;
}
