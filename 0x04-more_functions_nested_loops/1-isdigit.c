#include "main.h"
#include <unistd.h>
/**
 * _isdigit - function that checks for adigit 0 through 9
 * @c: int to be checked
 * Return: 1
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
