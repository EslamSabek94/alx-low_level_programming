#include <stdio.h>

/**
 * main - entry point
 * Descriptin: a program that prints the alphabet in lowercase exept some
 * Return: 0 (success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
			l++;
		putchar(l);
			l++;
	}
	putchar('\n');
	return (0);
}
