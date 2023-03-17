#include <stdio.h>

/**
* main - print the alphabet using putchar method
* putchar - function that takes a single
* argument and print it out to the console
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
