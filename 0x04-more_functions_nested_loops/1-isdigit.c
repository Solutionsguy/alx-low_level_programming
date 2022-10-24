#include "main.h"
#include <unistd.h>
/**
 * _isdigit - function that checks for adigit 0 through 9
 * _putchar - writes charater to standard output
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return(0);

}
