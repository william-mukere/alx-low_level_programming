#include <unistd.h>
#include "main.h"
/**
 * print_to_98 - prints valus from n to 98
 * @n: integer number less than or greater than 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar('\n');
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar('\n');
		}
	}
}
