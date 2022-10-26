#include "main.h"

/**
 * _puts - prints a string to std out
 * *@str: The string to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
