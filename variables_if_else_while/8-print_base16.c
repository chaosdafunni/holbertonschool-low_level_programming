#include <stdio.h>

int main(void)
{
	char abdnum;

		for (abdnum = '0'; abdnum <= '9'; abdnum++)
		{
			putchar(abdnum);
		}
	for (abdnum = 'a'; abdnum <= 'f'; abdnum++)
		{
			putchar(abdnum);
		}
	putchar('\n');
	return (0);
}
