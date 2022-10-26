#include "main.h"
/**
 * _strlen - Returns length of the string
 * @str: The string to get length of
 * Return: Length of string
 */
size_t_strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
