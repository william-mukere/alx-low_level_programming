#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a value
 * @n: character
 * Return: Always return n %10
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar('0' + (n % 10));
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar('0' + (n % 10));
		return (last_digit);
	}

}
