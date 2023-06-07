#include <stdio.h>
#include <stdbool.h>

int mememp(const char *s1, const char *s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char s1[] = "Hello";
    char s2[] = "Hell";
    int n = 4;

    if (mememp(s1, s2, n))
    {
        printf("As primeiras %d posições são iguais.\n", n);
    }
    else
    {
        printf("As primeiras %d posições são diferentes.\n", n);
    }

    return 0;
}
