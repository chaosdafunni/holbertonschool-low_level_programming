/**
 * int_index - searches for int
 *
 * @array:array used to search
 * @size: size of array
 * @cmp:pointer
 *
 * Return: -1
 */
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
