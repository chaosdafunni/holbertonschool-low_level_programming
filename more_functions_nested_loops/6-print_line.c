/**
 * print_line - counting lines
 *
 * @n: int used to check
 *
 * Return: void
 */
#include "main.h"

void print_line(int n)

{
	int a;

		if (n > 0)
		{
			for (a = 0; a < n; ++a)
				_putchar('_');
		}
	_putchar('\n');
}
