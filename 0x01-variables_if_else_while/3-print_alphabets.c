#include <stdio.h>

/**
 * main - Print Alphabet
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	for (a = 'a'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
