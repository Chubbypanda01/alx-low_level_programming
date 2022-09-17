#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 1207; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	print("%lu\n", n);
	return (0);
}
