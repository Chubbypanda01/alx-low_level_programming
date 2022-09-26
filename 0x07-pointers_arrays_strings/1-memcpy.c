#include "main.h"
/**
 * _memcpy - copy number bytes frm address "from"  to address "to"
 * @dest: contents is to be copied
 * @src: source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n) /* Declaring WHILE*/
	{
		*(dest + 1) = *(src + i); /*add 1 position dest and src*/
		i++

	} /*ENDWHILE*/


	return (dest);
}
