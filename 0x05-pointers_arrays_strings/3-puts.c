#include "main.h"

/**
 * _puts - prints a string followed by \n
 * @str: string to print
 */
void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
