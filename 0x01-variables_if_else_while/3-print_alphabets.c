#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet in lower & upper case
 * Return: 0 (success)
*/

int main(void)
{
	char l;

	char L;

	l = 'a';
	L = 'A';
	while
		(l <= 'z')
		{
			putchar(l);
			l++;
		}
	while
		(L <= 'Z')
		{
			putchar(L);
			L++;
		}
	putchar('\n');
	return (0);
}
