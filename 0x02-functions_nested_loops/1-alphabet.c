#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 'a';
	{
		for (n = 'a' ; n <= 'z' ; n++)
		_putchar(n);
	}
	_putchar('\n');
}
