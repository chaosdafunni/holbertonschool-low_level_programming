/**
 * array_iterator - executes a func given as a parameter
 *
 * @array: array used
 * @size: size of the array used
 * @action: pointer used
 *
 * Return: void
 */
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array && action)

		for (i = 0; i < size; i++)
			action(array[i]);
}
