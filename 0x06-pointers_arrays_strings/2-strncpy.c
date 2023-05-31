#include "main.h"
/**
 * *_strncpy - copy string
 *@dest: where to copy string
 *@src: input string value
 *@n: atmost number of bytes
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
