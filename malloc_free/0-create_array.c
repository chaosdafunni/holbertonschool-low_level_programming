/**
 * *create_array - creates array of chars
 * @size: size of arrays
 * @c: char used to check
 *
 * Return: p
 */

#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
