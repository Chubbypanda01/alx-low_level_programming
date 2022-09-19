#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 *
 * Description: print a string
 * On success: return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str = i) != '\0')
	{
		_putchar(*(str = i));
		i++;
	}

	putchar(10);
}
