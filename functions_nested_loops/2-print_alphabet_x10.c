/**
 * print_alphabet_x10 - printing the alphabet 10x
 *
 */
#include "main.h"

void print_alphabet_x10(void)
{
	int x;
	char alph;


	for (x = 0; x <= 10; x++)
{
	for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
	_putchar('\n');
}
}
