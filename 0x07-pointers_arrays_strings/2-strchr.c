#include "main.h"

/**
 * _strchr - locates a character in the given string 
 * @s: the given string
 * @c: occurence of the character
 * Return: Always 0 (sucess)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i] - 1);
	}
	return (0);
}

