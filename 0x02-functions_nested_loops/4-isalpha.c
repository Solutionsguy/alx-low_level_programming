#include "main.h"
/**
 * _isalpha - checks if its alphabetic
 * @c: character to be checked
 * Return: 1 ifits a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
