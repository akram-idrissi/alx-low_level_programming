#include <stdio.h>

/**
 * main - prints digits from 0 to 9 using putchar method
 * and only int variables.
 * puchat - display chars to standard outout
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
