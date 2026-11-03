#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char symbol;
    int nombre;
    int count;

    printf("Choisissez un symbole + ou - :\n");
    scanf("%c", &symbol);

    printf("Choisissez un nombre entier différent de 0 :\n");
    scanf("%d", &nombre);

    if (symbol == '+')
    {
        count = 0;
        while (count < nombre)
        {
            printf("%d\n", count);
            count = count + 1;
        }
    }
    else if (symbol == '-')
    {
        count = nombre - 1;
        while (count >= 0)
        {
            printf("%d\n", count);
            count = count - 1;
        }
    }
    else
    {
        printf("Le symbole n'est pas reconnu\n");
    }

    exit(0);
}
