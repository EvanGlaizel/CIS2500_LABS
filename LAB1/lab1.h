#include <stdio.h>
#include <string.h>

#define NUM_EMP 3
/* definition of an employee record*/

struct employee
{
	char fname[20];
	char lname[20];
	int id;
   char dependents [3][20];     // assume no emp can have more than 3 registered dependents
};

typedef struct employee Employees;

// add function prototypes here
void saveEmployees(Employees arrEmployees[NUM_EMP], int c, char fileName[100]);
int loadEmployees(Employees arrEmployees[NUM_EMP], char fileName[100]);
void printAnEmployee(Employees employee);
int searchFirstName(char fname[20], Employees arrEmployees[NUM_EMP]);