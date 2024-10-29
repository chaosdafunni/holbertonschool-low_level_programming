/**
 * main - printing fizz buzz on certain lines
 *
 * Return: void
 */
#include <stdio.h>

int main(void)

{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n  % 3) == 0 && (n % 5) == 0)

			printf("Fizzbuzz");

		else if ((n % 3) == 0)

			printf("Fizz");

		else if ((n % 5) == 0)

			printf("Buzz");

		else
			printf("%d", n);


		if (n == 100)
			continue;
		printf(" ");

	}

	printf("\n");

	return (0);
}