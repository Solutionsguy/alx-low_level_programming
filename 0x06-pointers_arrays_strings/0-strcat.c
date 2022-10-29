#include "main.h"

/**
<<<<<<< HEAD
 * strcat - Concatenates the string pointed to by @src, including the
 *  terminating
 *  null byte, to the end of the string pointed to by @dest.
=======
 * strcat - Concatenates the string pointed to by @src, including the terminating
>>>>>>> daedd19d89576feba8e3b87b9b23546ea94c51c1
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
<<<<<<< HEAD
=======

>>>>>>> daedd19d89576feba8e3b87b9b23546ea94c51c1
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
