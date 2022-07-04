#include <stdio.h>

/**
 * main - get the average of an array of salary
 * 
 * Return: return 0 as success
 */

int main()
{
	int salaries[] = {2300, 4500, 7390, 4269, 7605};
	int lenght;
	int i;
	int sum = 0;
	int average_salary;

	lenght = sizeof(salaries) / sizeof(salaries[0]);

	for (i = 0; i < lenght; i++)
	{
		if (i == 0 || i == (lenght - 1))
		{
			continue;
		}
		else
		{
			sum += salaries[i];
		}
	}
	average_salary = sum / (lenght - 2);
	printf("Average salary is: %d\n", average_salary);

	return (0);
}

