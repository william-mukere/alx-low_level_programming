#include <unistd.h>
#include "main.h"
/**
 * _abs - function computes absolute value of integer
 * @n: integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
	_putchar(n);
	}
	else if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}
