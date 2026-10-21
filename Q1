
#include <stdio.h>

int main()
{
    int seats[10][4] = {0};
    int row, seat, total, fullRows = 0;
    int booked;

    printf("How many seats do you want to reserve? ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)
    {
        printf("\nEnter row number (1-10): ");
        scanf("%d", &row);

        printf("Enter seat number (1-4): ");
        scanf("%d", &seat);

        if (row < 1 || row > 10 || seat < 1 || seat > 4)
        {
            printf("Invalid row or seat number\n");
            i--;
        }
        else if (seats[row - 1][seat - 1] == 1)
        {
            printf("Seat already booked\n");
            i--;
        }
        else
        {
            seats[row - 1][seat - 1] = 1;
            printf("Seat reserved successfully\n");
        }
    }

    printf("\nSeating Arrangement:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Row %d: ", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("%d ", seats[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        booked = 1;

        for (int j = 0; j < 4; j++)
        {
            if (seats[i][j] == 0)
            {
                booked = 0;
                break;
            }
        }

        if (booked == 1)
        {
            fullRows++;
        }
    }

    printf("\nTotal fully booked rows: %d\n", fullRows);

    return 0;
}
