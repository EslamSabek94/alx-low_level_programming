#include "main.h"

/**
 * _islower - check lowercase character
 * Discription: check input of function
 * Return: 1 if c is lowercase
 * 	otherwise 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
