#include "main.h"
/**
 * _isdigit - check whether a digit is between 0 and 9
 * @c: integer
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
