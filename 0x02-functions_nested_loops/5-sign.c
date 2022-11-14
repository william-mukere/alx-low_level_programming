#include <unistd.h>
#include "main.h"
/**
 * print_sign - Check if the character is + or -
 * @n: The character
 * Return: 1 if character is +ve , 0 if character
 * is zero and -1 if character is -ve.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
