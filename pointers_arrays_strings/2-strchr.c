/**
 * _strchr - locates a character in a string
 *
 * @s: char used to check
 * @c: other char used to check
 *
 * Return: NULL
 *
 */
#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)

{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
