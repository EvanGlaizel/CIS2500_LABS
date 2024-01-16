#include "lab1.h"

void saveEmployees(Employees arrEmployees[NUM_EMP], int c, char fileName[100])
{
    //Open the file
    FILE * fptr = fopen(fileName, "w");

    //Loop through and save each employee
    for (int i = 0; i < c; i++)
    {
        fprintf(fptr, "%s %s %d", arrEmployees[i].fname, arrEmployees[i].lname, arrEmployees[i].id);

        //Loop through the employee dependants
        for (int j = 0; j < 3; j++)
        {
            fprintf(fptr, " %s", arrEmployees[i].dependents[j]);
        }

        fprintf(fptr, "\n");
    }

    //Close the file
    fclose(fptr);
}

int loadEmployees(Employees arrEmployees[NUM_EMP], char fileName[100])
{
    int i = 0;

    //Open the file
    FILE * fptr = fopen(fileName, "r");

    //Loop through each employee
    while (!feof(fptr))
    {
        //Get and store the employees data
        fscanf(fptr, "%s", arrEmployees[i].fname);
        fscanf(fptr, "%s", arrEmployees[i].lname);
        fscanf(fptr, "%d", &arrEmployees[i].id);

        //Loop through and get the employees dependants
        for (int j = 0; j < 3; j++)
        {
            fscanf(fptr, "%s", arrEmployees[i].dependents[j]);
        }

        i++;
    }

    //Close the file
    fclose(fptr);

    //Return the number of files loaded
    return i - 1;
}