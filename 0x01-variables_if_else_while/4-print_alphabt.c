#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 if (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
			put char(i);
	}
	putchar('\n');
	return (0);
}
