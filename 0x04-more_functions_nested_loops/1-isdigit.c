#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes charater to standard output
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
