#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[20];
    char lastName[20];
    double salary;
} Employee;

Employee emp_init(Employee);
Employee setSalary(Employee, double);
void displayEmployeeData();

Employee emp_init(Employee e)
{
    printf("Enter employee name : ");
    scanf(" %s", &e.name);
    printf("Enter employee last name : ");
    scanf("%s", &e.lastName);
    printf("Enter employee salary : ");
    scanf("%ld", &e.salary);

    return e;
}

Employee setSalary(Employee e, double sal)
{
    e.salary = sal * 12;
    return e;
}

double getYearlySalary(Employee e)
{
    printf("\nEmployee yearly salary is : %ld ", e.salary * 12);

    return e.salary * 12;
}

void getYearlySalaryWithGain(double sal)
{
    sal = sal + (sal / 10);
    printf("\nEmplyee yearly salary with 10%% gain : %.ld ", sal);
}

void displayEmployeeData(Employee e)
{
    printf("\nEmployee name is : %s", e.name);
    printf("\nEmployee last name is : %s", e.lastName);
}

int main()
{
    Employee e1;
    Employee e2 = emp_init(e1);

    displayEmployeeData(e2);
    double salary = getYearlySalary(e2);
    getYearlySalaryWithGain(salary);
}