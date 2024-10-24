/**
 * main - print 0 to 9 but with putchar
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)

		putchar(num + '0');

	putchar('\n');

	return (0);
}
