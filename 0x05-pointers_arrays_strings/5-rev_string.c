#include "main.h"

/**
 * rev_string - revers a string
 * @s: string parameter input
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (1 = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l; i++)
	{
	temo = s[i];
	s[i] = s[l - l - i];
	s[l - l - i] = temp;
	}
}
