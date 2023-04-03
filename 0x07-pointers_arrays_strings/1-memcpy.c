#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: memory areas to be filled
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
