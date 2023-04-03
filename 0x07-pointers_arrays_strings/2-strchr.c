#include "main.h"

/**
 * _strchr - locates a character in the given string 
 * @s: the given string
 * @c: occurence of the character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
