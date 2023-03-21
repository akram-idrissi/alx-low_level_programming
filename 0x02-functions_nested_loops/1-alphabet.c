#include "main.h"

/**
 *
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}

	return (0);
}
