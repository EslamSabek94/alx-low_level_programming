#include "main.h"

/**
 * print_alphabet - alphabet a - z
 * Description: utilizes on the _putchar function
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
