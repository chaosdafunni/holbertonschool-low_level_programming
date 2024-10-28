/**
 * print_diagonal - printing diagonal
 *
 * @n: int used to check
 *
 */
#include "main.h"

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');

			if (b == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
