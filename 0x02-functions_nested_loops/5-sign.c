#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number which sign will be printed
 * Return: 1 is greater than zero,
 * 0 if the number is zero,
 * -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
