#include "main.h"
/**
 * print_line - draws a straight line using the character -.
 * @n: number _ is printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
