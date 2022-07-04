#include <stdio.h>

/**
*  main - return the average of sum of salary excluding thr minimum and maximum
*
*  Return: return 0 as success
*/


int main()
{
    int numbers[ ] = {2300, 5600, 8200, 1430, 9600};
    int lenght;
    int i;
    int sum = 0;
    int average_sum;
    int min = numbers[0];
    int max = numbers[0];
    
    lenght = sizeof(numbers) / sizeof(numbers[0]);
    
    for (i = 0; i < lenght; i++)
    {
        if (numbers[i] < numbers[0])
        {
            min = numbers[i];
        }
        else if (numbers[i] > numbers[0])
        {
            max = numbers[i];
        }
    }
    for (i = 0; i < lenght; i++)
    {
        if (numbers[i] != min && numbers[i] != max)
        {
            sum += numbers[i];
        }
    }
    average_sum = sum / (lenght - 2);
    printf("Average salary is : %d", average_sum);
    return (0);
}
