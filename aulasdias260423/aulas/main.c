#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
/*==================================================================================*/


    int i, n;

    printf("Intro: ");
    scanf("%d", &n);

    for(i=n; ; i++){
        if(i%10==0)
            break;
        else
            if(i%3 ==0)
                continue;
        printf("%d\n", i);
    }


}

