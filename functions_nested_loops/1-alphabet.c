/**
 * print_alphabet - printing alphabet (again) with _putchar
 *
 * Return: always 0
 */
#include "main.h"

void print_alphabet(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)

		_putchar(alph);

	_putchar('\n');

}
