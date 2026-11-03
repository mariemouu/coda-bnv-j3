#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nombre;
    int count = 0;

    printf("Choisissez un nombre entier différent de 0 :\n");
    scanf("%d", &nombre);

    while (count < nombre)
    {
        printf("%d\n", count);
        count = count + 1;
    }

    exit(0);
}
