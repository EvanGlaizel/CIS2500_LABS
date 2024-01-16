#include "lab1.h"

int main(int argc, char * argv[])
{
    

    int employeesLoaded;

    Employees employees[NUM_EMP];
    Employees employees2[NUM_EMP];

    strcpy(employees[0].fname, "emp1num1");
    strcpy(employees[0].lname, "emp1num2");
    employees[0].id = 1;
    strcpy(employees[0].dependents[0], "emp1dep1");
    strcpy(employees[0].dependents[1], "emp1dep2");
    strcpy(employees[0].dependents[2], "emp1dep3");
    strcpy(employees[1].fname, "emp2num1");
    strcpy(employees[1].lname, "emp2num2");
    employees[1].id = 2;
    strcpy(employees[1].dependents[0], "emp2dep1");
    strcpy(employees[1].dependents[1], "emp2dep2");
    strcpy(employees[1].dependents[2], "emp2dep3");
    strcpy(employees[2].fname, "emp3num1");
    strcpy(employees[2].lname, "emp3num2");
    employees[2].id = 3;
    strcpy(employees[2].dependents[0], "emp3dep1");
    strcpy(employees[2].dependents[1], "emp3dep2");
    strcpy(employees[2].dependents[2], "emp3dep3");

    //employees2[0] = employees[0];
    //employees2[1] = employees[1];
    //employees2[2] = employees[2];
    
    saveEmployees(employees, 1, "employees.txt");
    employeesLoaded = loadEmployees(employees2, "employees.txt");

    //printf("%d", employeesLoaded);

    for (int i = 0; i < 3; i++)
    {
        printf("%s %s\n", employees[i].fname, employees2[i].fname);
        printf("%s %s\n", employees[i].lname, employees2[i].lname);
        printf("%d %d\n", employees[i].id, employees2[i].id);
        
        for (int j = 0; j < 3; j++)
        {
            printf("%s %s\n", employees[i].dependents[j], employees2[i].dependents[j]);
        }
    }

    printf("\nLAB1B\n");

    printAnEmployee(employees[0]);

    printf("%d\n", searchFirstName("emp2num1", employees));
    printf("%d\n", searchFirstName("john", employees));
}