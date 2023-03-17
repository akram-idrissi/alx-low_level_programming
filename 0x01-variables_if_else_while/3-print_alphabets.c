#include <stdio.h>

/**
 * main - prints out alphabet in upper and lower case
 * putchar - display a char to the standard output
 * Retur: Always 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
