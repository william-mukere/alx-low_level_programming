#include <unistd.h>
#include "main.h"
/**
 * _abs - function computes absolute value of integer
 * @n: integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
}
