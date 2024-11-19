/**
 * print_name - function to print a name
 * @name: name being printed
 * @f: pointer to the func
 */
#include "function_pointers.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
	f(name);
}
