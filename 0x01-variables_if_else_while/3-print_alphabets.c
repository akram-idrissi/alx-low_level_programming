#include <stdio.h>

/**
* main - print the alphabet using putchar method
* in lower and uppercase
* putchar - takes one argument and prints it to the
* console
* Return: Always 0 (Success)
*
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
