
#include <stdio.h>

int main()
{
    int data[3][3], key[3][3], encrypted[3][3];
    int max, maxRow = 0, maxCol = 0;

    printf("Enter values for the data matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }

    printf("Enter values for the key matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &key[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
        }
    }

    printf("\nEncrypted Matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", encrypted[i][j]);
        }

        printf("\n");
    }

    max = encrypted[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (encrypted[i][j] > max)
            {
                max = encrypted[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("\nMaximum Encrypted Value: %d\n", max);
    printf("Position (row, column): (%d, %d)\n",
           maxRow + 1, maxCol + 1);

    return 0;
}
