#include "main.h"
/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: the contant byte for filling
 * @n: bytes
 * Return: Always 0(Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
