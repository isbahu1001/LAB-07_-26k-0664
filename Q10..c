#include <stdio.h>

int main()
{
    int classes, students, subjects;
    int i, j, k, marks;
    int total, passed;
    int classTotal, schoolTotal = 0;
    int totalStudents = 0;
    float average, classAverage, schoolAverage;

    printf("Enter number of classes: ");
    scanf("%d", &classes);

    for (i = 1; i <= classes; i++)
    {
        classTotal = 0;

        printf("\nEnter number of students in Class %d: ", i);
        scanf("%d", &students);

        for (j = 1; j <= students; j++)
        {
            total = 0;
            passed = 1;

            printf("\nEnter number of subjects for Student %d: ", j);
            scanf("%d", &subjects);

            for (k = 1; k <= subjects; k++)
            {
                printf("Enter marks for Subject %d: ", k);
                scanf("%d", &marks);

                total = total + marks;

                if (marks < 40)
                {
                    passed = 0;
                }
            }

            average = (float) total / subjects;

            printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = ",
                   i, j, total, average);

            if (passed == 1)
            {
                printf("Pass\n");
            }
            else
            {
                printf("Fail\n");
            }

            classTotal = classTotal + total;
            totalStudents++;
        }

        if (students > 0)
        {
            classAverage = (float) classTotal / students;
        }
        else
        {
            classAverage = 0;
        }

        printf("\nTotal marks for Class %d = %d\n", i, classTotal);
        printf("Class average = %.2f\n", classAverage);

        schoolTotal = schoolTotal + classTotal;
    }

    if (totalStudents > 0)
    {
        schoolAverage = (float) schoolTotal / totalStudents;
    }
    else
    {
        schoolAverage = 0;
    }

    printf("\nTotal marks across all classes = %d\n", schoolTotal);
    printf("Overall school average per student = %.2f\n", schoolAverage);

    return 0;
}
