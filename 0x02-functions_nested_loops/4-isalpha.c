#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check.
 * Return: 1 if c is alpha 0 otherwise.
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
