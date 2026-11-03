#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char symbol;

    printf("Choisissez un signe d'opération (+, -, /, *, %%) :\n");
    scanf("%c", &symbol);

    if (symbol == '+')
    {
        printf("L'opération est une addition\n");
    }
    else if (symbol == '-')
    {
        printf("L'opération est une soustraction\n");
    }
    else if (symbol == '*')
    {
        printf("L'opération est une multiplication\n");
    }
    else if (symbol == '/')
    {
        printf("L'opération est une division\n");
    }
    else if (symbol == '%')
    {
        printf("L'opération est un module\n");
    }
    else
    {
        printf("L'opération n'existe pas\n");
    }

    exit(0);
}
