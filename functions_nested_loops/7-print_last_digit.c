/**
 * print_last_digit - printing the last digit
 *
 * @num: value of the int
 *
 * Return: 0
 *
 */
#include "main.h"

int print_last_digit(int num)
{
	int mun = num % 10;

	if (mun < 0)

	mun *= -1;
		

	_putchar(mun + '0');


	return (mun);
}
