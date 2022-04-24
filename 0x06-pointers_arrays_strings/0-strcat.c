#include main.h

/**
 *to concatenate two strings
 *appends the src string to the dest string
 *returns a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
