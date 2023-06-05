#include "main.h"
/**
 * *_memset - fills memory wit constant value
 *@s: memory to be filled
 *@b: the value to fill
 *@n: number of bytes
 *Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
