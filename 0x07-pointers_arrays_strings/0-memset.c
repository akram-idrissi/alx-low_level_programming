#include "main.h"

/**
 *
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to the memory areas
 *
 * @b: constant that willfill the areas
 * 
 * @n: memory areas to be filled
 * 
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
