/**
 * _islower - checking for lowercase characters
 *
 * @c: int to check
 * Return: 1 if not 0
 */
#include "main.h"

int _islower(int c)

{
	if (c >= 'a' && c  <= 'z')
		return (1);

	else
		return (0);


}
