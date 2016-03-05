#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[7];
    int i = 0;

    printf("Insira as notas das 7 disciplinas que teve durante o presente ano letivo, separadas por uma nova linha.\n");

    for(i = 0; i < 7; i++) {
        scanf("%f", &notas[i]);
    }

    float media = 0;

    for (i = 0; i < 7; i++) {
        media += notas[i];
    }

    media = media / 7;
    printf("A média das suas notas é de %f valores.\n", media);
    return 0;
}
