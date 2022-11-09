#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	{
		for ( ; i <= 9 ; i++)
		{
			print_alphabet();
			_putchar('\n');
		}
	}
	_putchar('\n');
}
