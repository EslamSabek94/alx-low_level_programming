#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints different combinations of two digits
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0, digit2;

	while
		(digit <= 9)
	{
		digit2 = 0;
		while
			(digit2 <= 9)
			{
				if (digit != digit2 && digit < digit2)
				{
					putchar(digit + 48);
					putchar(digit2 + 48);
					if (digit + digit2 != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit2++;
			}
		digit++;
	}
	putchar('\n');
	return (0);
}
