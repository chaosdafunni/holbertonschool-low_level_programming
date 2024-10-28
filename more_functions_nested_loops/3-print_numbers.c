/**
 * print_numbers - printing from 0 to 9
 *
 * Return: void
 */
#include "main.h"

void print_numbers(void)
{
	char n;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
