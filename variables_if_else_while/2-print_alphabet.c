/**
 * main - printing alphabet without printf or puts
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
