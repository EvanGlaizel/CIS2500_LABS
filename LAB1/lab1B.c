#include "lab1.h"

void printAnEmployee(Employees employee)
{
    printf("\nFirst Name: %s\n", employee.fname);
    printf("Last Name: %s\n", employee.lname);
    printf("ID: %d\n", employee.id);

    //Print the dependants if it's not empty
    for (int i = 0; i < 3 && strcmp(employee.dependents[i], ""); i++)
    {
        printf("Dependant %d: %s\n", i + 1, employee.dependents[i]);
    }
}

int searchFirstName(char fname[20], Employees arrEmployees[NUM_EMP])
{
    //Loop through each employee to search for them
    for (int i = 0; i < NUM_EMP; i++)
    {
        //If the first name matches return the employee id
        if (!strcmp(arrEmployees[i].fname, fname))
        {
            return arrEmployees[i].id;
        }
    }

    return -1;
}