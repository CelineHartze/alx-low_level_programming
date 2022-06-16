#include "main.h"

/**
* string_toupper - converts all lowercase letters of a string to uppercase
* @str: string to be comverted
*
* Return: pointer to converted uppercase string
*/
char *string_toupper(char *str)
{
	char *new_str = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;

		str++;
	}

	return (new_str);
}
