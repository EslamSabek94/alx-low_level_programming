#include "main.h"

/**
 * swap_int - swap the value of two integers using two parameters
 * @a: input parameter
 * @b: input parameter
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
