/**
 * _isalpha - checking for a character
 *
 * @c: checking int
 *
 * Return: 1 if not then 0
 */
#include "main.h"

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
		return (1);
}
	else
		return (0);

}
