#include "main.h"
/**
 *_isalpha - check for alphabetic
 *@c: character to check
 *Return: 1 if char is alpabet
 *Return: 0 otherwise
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 65 && c <= 90 || c >= 97 && c <= 122))
		return (1);
	return (0);
}
