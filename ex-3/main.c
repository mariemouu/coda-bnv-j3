#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char mot[50];
    int count = 0;

    printf("Saisissez un mot de moins de 50 caractères :\n");
    scanf("%49s", mot);

    while (count < 5)
    {
        printf("%d : %s\n", count, mot);
        count = count + 1;
    }

    exit(0);
}
