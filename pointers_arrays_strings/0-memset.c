/**
 * _memset - filling memory with a constant byte
 * @s: char used to check
 * @b: other char used
 * @n: int used to check
 *
 * Return: s
 */
#include "main.h"

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return(s);
}
