/**
 * print_rev - printing the string in reverse
 *
 * @s: char used to check
 *
 * Return: void
 */
#include "main.h"

void print_rev(char *s)

{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

		for (x -= 1; x >= 0; x--)

	{
			_putchar(s[x]);
	}
	_putchar('\n');
}
