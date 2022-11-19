#include <unistd.h>
#include "main.h"
/**
 * print_to_98 - prints valus from n to 98
 * @n: integer number less than or greater than 98
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			_putchar(c);
			_putchar(',');
			_putchar('\n');
		}
		return (0);
	}
	else
	{
		for (c = n; c >= 98; c--)
		{
			_putchar(c);
			_putchar(',');
			_putchar('\n');
		}
		return (0);
	}
}
