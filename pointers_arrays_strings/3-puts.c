/**
 * _puts - printing a string followed by a new line
 *
 *@str: a char used to check
 *
 * Return: void
 */
#include "main.h"

void _puts(char *str)

{
	while (*str)
		_putchar(*str++);
	_putchar('\n');

}
