#include "main.h"

/**
 * _islower(int c) - checks for lowercase character
 * Return: 1 if c is lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
