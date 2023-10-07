#include <stdio.h>

/**
 * main - entry point
 * Description: a program prints combinations of two two-digit
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0, digit2;

	while (digit <= 99)
	{
		digit2 = digit;
		while (digit2 <= 99)
		{
			if (digit2 != digit)
			{
				putchar((digit / 10) + 48);
				putchar((digit % 10) + 48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
				putchar((digit2 % 10) + 48);

				if (digit != 98 || digit2 != 99)
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
