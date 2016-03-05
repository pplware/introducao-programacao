#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[3][5];
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Insira as notas para a %dª disciplina:\n", i+1);
        for (j = 0; j < 5; j++) {
            printf("Nota %d: ", j+1);
            scanf("%d", &notas[i][j]);
        }
    }

    int alta;

    for(i = 0; i < 3; i++) {
        alta = 0;

        for (j = 0; j < 5; j++) {
            if (notas[i][j] > alta) {
                alta = notas[i][j];
            }
        }

        printf("A nota mais alta da %dª disciplina é de %d valores.\n", i+1, alta);
    }

    return 0;
}
