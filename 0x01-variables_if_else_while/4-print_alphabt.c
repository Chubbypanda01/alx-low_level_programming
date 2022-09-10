#include <stdio.h>

/**
 * main - ommit some alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
			put char(i);
	}
	putchar('\n');
	return (0);
}
