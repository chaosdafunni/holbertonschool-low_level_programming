/**
 * _memcpy - func used to copy memory
 *
 * @dest: char used to copy
 * @src: char used to copy onto
 * @n: int used for values
 *
 * Return: dest
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; ++a)
	{
		dest[a] = src[a];
	}
	return (dest);
}
