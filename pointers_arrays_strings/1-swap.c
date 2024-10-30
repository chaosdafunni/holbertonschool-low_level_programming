/**
 * swap_int - swaping the values of the ints
 * @a: an int being swapped
 * @b: other int being swapped
 *
 * Return: void
 */
#include "main.h"

void swap_int(int *a, int *b)

{
	int wasd;

	wasd = *a;

	*a = *b;

	*b = wasd;
}
