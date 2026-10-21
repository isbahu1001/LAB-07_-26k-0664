
#include <stdio.h>

int main()
{
    int marks[2][3][3];
    int total[2][3] = {0};
    int classTopper, overallClass = 0, overallStudent = 0;
    int highest = 0;

    for (int c = 0; c < 2; c++)
    {
        for (int s = 0; s < 3; s++)
        {
            for (int sub = 0; sub < 3; sub++)
            {
                printf("Enter marks for Class %d, Student %d, Subject %d: ",
                       c + 1, s + 1, sub + 1);
                scanf("%d", &marks[c][s][sub]);

                total[c][s] += marks[c][s][sub];
            }
        }
    }

    printf("\nTotal Marks of Each Student:\n");

    for (int c = 0; c < 2; c++)
    {
        for (int s = 0; s < 3; s++)
        {
            printf("Class %d, Student %d: %d marks\n",
                   c + 1, s + 1, total[c][s]);
        }
    }

    printf("\nClass Toppers:\n");

    for (int c = 0; c < 2; c++)
    {
        classTopper = 0;

        for (int s = 1; s < 3; s++)
        {
            if (total[c][s] > total[c][classTopper])
            {
                classTopper = s;
            }
        }

        printf("Top Performer of Class %d: Student %d with %d marks\n",
               c + 1, classTopper + 1, total[c][classTopper]);

        for (int s = 0; s < 3; s++)
        {
            if (total[c][s] > highest)
            {
                highest = total[c][s];
                overallClass = c;
                overallStudent = s;
            }
        }
    }

    printf("\nOverall Topper: Class %d, Student %d with %d marks\n",
           overallClass + 1, overallStudent + 1,
           total[overallClass][overallStudent]);

    return 0;
}
