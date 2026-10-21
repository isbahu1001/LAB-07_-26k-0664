#include <stdio.h>

int main()
{
    int departments, employees;
    int i, j, days;
    int salary, bonus;
    int departmentTotal, companyTotal = 0;

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    for (i = 1; i <= departments; i++)
    {
        departmentTotal = 0;

        printf("\nEnter number of employees in Department %d: ", i);
        scanf("%d", &employees);

        for (j = 1; j <= employees; j++)
        {
            printf("Enter days worked by Employee %d: ", j);
            scanf("%d", &days);

            salary = days * 500;
            bonus = 0;

            if (days > 25)
            {
                bonus = 2000;
            }

            salary = salary + bonus;
            departmentTotal = departmentTotal + salary;

            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n",
                   i, j, days, salary);
        }

        printf("\nTotal salary for Department %d = Rs. %d\n",
               i, departmentTotal);

        companyTotal = companyTotal + departmentTotal;
    }

    printf("\nTotal salary paid across all departments = Rs. %d\n",
           companyTotal);

    return 0;
}
