
#include <stdio.h>

int main()
{
    int grid[3][3];
    int valid = 1;

    printf("Enter numbers for the 3x3 Sudoku grid (0 for empty):\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] < 0 || grid[i][j] > 9)
            {
                valid = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (i == x && j == y)
                    {
                        continue;
                    }

                    if (grid[i][j] != 0 && grid[i][j] == grid[x][y])
                    {
                        valid = 0;
                    }
                }
            }
        }
    }

    if (valid == 1)
    {
        printf("Valid Grid");
    }
    else
    {
        printf("Invalid Grid");
    }

    return 0;
}
