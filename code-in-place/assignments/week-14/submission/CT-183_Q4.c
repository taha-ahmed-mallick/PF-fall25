#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    int id;
    int salary;
    char dep[20];
} Employee;

int main()
{
    Employee employees[5];
    printf("======Enter Employee Details=====\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t===Detail of Employee %d====\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);
        while (getchar() != '\n');
        printf("Department Code: ");
        fgets(employees[i].dep, sizeof(employees[i].dep), stdin);
        employees[i].dep[strcspn(employees[i].dep, "\n")] = '\0';
        while (getchar() != '\n');
    }
    int highest = 0;
    for (int i = 1; i < 5; i++)
        if (employees[i].salary > employees[highest].salary)
            highest = i;
    printf("\n\t====Highest Salary Employee====\n");
    printf("Name: %s\nID: %d\nSalary: %d\nDepartment: %s\n", employees[highest].name, employees[highest].id, employees[highest].salary, employees[highest].dep);
    return 0;
}