#include "main.h"
/**
 *_islower - check for lower case
 *@c: character to check
 *Return: 1 if caracter is lower
 *Return: 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
