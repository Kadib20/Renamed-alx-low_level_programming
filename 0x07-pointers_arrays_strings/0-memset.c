#include "main.h"

/**
 *n:bytes of memory to be filled
 *s:memory to be filled
 *b:constant byte to be filled
 *return:memory area filled
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	for (i = 0; i < n; i++)

		s[i] = b;

	return (s);
}
