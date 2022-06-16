#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string whose contents to append to src
*
* Definition:
* This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (new_dest);
}
