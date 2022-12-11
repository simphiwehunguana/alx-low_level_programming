#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char sim;

	for (sim = 'a', sim <= 'z', sim++)
	{
		putchar(sim);
	}
	putchar('\n');
	return (0);
}
