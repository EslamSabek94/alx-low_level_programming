#include "main.h"

/**
 * main - entry point
 * Description: prints the sum of even-valued
 * febonacci sequence not exceed 4million
 * Return: 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fibe2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fibe1 = fibe2;
		fibe2 = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
