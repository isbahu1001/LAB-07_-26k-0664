
#include <stdio.h>

int main()
{
    float temp[3][3][3];
    float sum, avg, maxTemp;
    float layerAvg[3];
    int hotLayer = 0;
    int x, y, z;
    int maxX = 0, maxY = 0, maxZ = 0;

    printf("Enter temperatures for the 3x3x3 greenhouse:\n");

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            for (z = 0; z < 3; z++)
            {
                printf("Enter temperature at (%d, %d, %d): ", x + 1, y + 1, z + 1);
                scanf("%f", &temp[x][y][z]);
            }
        }
    }

    maxTemp = temp[0][0][0];

    for (z = 0; z < 3; z++)
    {
        sum = 0;

        for (x = 0; x < 3; x++)
        {
            for (y = 0; y < 3; y++)
            {
                sum += temp[x][y][z];

                if (temp[x][y][z] > maxTemp)
                {
                    maxTemp = temp[x][y][z];
                    maxX = x;
                    maxY = y;
                    maxZ = z;
                }
            }
        }

        layerAvg[z] = sum / 9;

        printf("Average temperature of Layer %d: %.2f\n",
               z + 1, layerAvg[z]);
    }

    for (z = 1; z < 3; z++)
    {
        if (layerAvg[z] > layerAvg[hotLayer])
        {
            hotLayer = z;
        }
    }

    printf("\nHottest Layer: %d\n", hotLayer + 1);
    printf("Average Temperature: %.2f\n", layerAvg[hotLayer]);

    printf("\nMaximum Temperature: %.2f\n", maxTemp);
    printf("Position (x, y, z): (%d, %d, %d)\n",
           maxX + 1, maxY + 1, maxZ + 1);

    return 0;
}
