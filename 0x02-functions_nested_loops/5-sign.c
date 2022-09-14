#include "main.h"

/**
 * print_sign - print the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
