#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints the lowercase alphabet in reverse
 * Return: 0 (success)
*/

int main(void)
{
	char l = 'z';

	while
		(l >= 'a')
		{
			putchar(l);
			l--;
		}
	putchar('\n');
	return (0);
}
