#include "main.h"
#include <stdio.h>

/**
 * main - returns the largest number of the three
 * Description: 'the program's description'
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
