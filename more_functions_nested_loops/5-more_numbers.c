/**
 * more_numbers - printing 10 times 0 to 14
 *
 * Return: void
 */
#include "main.h"

void more_numbers(void)
{
	char n, m;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 14; ++n)
		{
			if (n > 9)
			_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
