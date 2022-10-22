#include "main.h"

/**
 * main - returns the largest number of the three
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{int largest;

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
