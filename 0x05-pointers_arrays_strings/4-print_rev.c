#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}


