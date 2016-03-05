#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int i = 0;

    for(i = 0; i < 5; i++) {
        printf("Insira o %dº número:\n", i+1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("O número na posição %d é %d.\n", i, numeros[i]);
    }

    return 0;
}
