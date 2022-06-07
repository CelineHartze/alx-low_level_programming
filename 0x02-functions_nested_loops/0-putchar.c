#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char puts[7] = "putchar";
	int i;
	int v = '_';

	putchar(v);
	for (i = 0; i < 7; i++)
	{
		putchar(puts[i]);
	}
	putchar('\n');
	return (0);
}
