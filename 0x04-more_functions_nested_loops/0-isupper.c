#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase
 * @c: checks imput function
 *
 * Return: returns1 if 'c' is uppercase
 * otherwise always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
		return (0);
}
