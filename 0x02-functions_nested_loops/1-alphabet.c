#include "main.h"
/**
 * main - Print alphabet
 * Ruturn: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
