/**
 * print_to_98 - value
 *
 * @n: the int
 *
 * Return: void
 */
#include <stdio.h>

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
