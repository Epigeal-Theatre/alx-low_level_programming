#include "main.h"
/**
 * _strpbrk - entry
 * @s: value input
 * @accept: value input
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	return (s);
	}
	s++;
	}
return ('\0');
}
