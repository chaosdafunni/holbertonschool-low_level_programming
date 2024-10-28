/**
 * _isdigit - checking for a digit
 *
 *@c: int used to check the value
 *
 * Return: 1 or 0
 */
#include "main.h"

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);


}
