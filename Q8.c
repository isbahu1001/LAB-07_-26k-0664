#include <stdio.h>

int main()
{
    int i, j;
    char ch;

    /* Right-aligned star triangle */
    printf("Right-Aligned Star Triangle:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    /* Right-aligned number triangle */
    printf("\nRight-Aligned Number Triangle:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("%d", j);

        printf("\n");
    }

    /* Right-aligned alphabet triangle */
    printf("\nRight-Aligned Alphabet Triangle:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 0; j < i; j++)
        {
            ch = 'A' + j;
            printf("%c", ch);
        }

        printf("\n");
    }

    /* Star pyramid */
    printf("\nStar Pyramid:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    /* Number pyramid */
    printf("\nNumber Pyramid:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("%d", j);

        printf("\n");
    }

    /* Alphabet pyramid */
    printf("\nAlphabet Pyramid:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 0; j < 2 * i - 1; j++)
        {
            ch = 'A' + (j % 26);
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
