#include <stdio.h>

/**
 * main - entry point
 * Description: a program prints different combinations of three digits
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;
	int digit2, digit3;

while
	(digit <= 9)
{
	digit2 = 0;
	while
		(digit2 <= 9)
	{
		digit3 = 0;
		while
			(digit3 <= 9)
		{
			if (digit != digit2 &&
			digit < digit2 &&
			digit2 != digit3 &&
			digit2 < digit3)
			{
				putchar(digit + 48);
				putchar(digit2 + 48);
				putchar(digit3 + 48);
				if (digit + digit2 + digit3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit3++;
		}
		digit2++;
	}
	digit++;
}
putchar('\n');
return (0);
}
