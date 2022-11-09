#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n = 'a', i = 0;
	{
		for ( ; i <= 9 ; i++)
		{
			for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		}
	}
	_putchar('\n');
}
