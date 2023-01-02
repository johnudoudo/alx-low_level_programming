#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with constant byte @b
 *
 * @n: bytes of the memory area pointedto by @s
 *
 * @s: with constant byte @b
 *
 * @b: memory area pointer
 *
 * Return:a pointer o the memory area @s
 */
char *_memset(char *s char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
