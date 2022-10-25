#include <stdio.h>
/**
 * main -Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 'a';
	{
		for (n = 'a' ; n <= 'z' ; n++)

			putchar(n);
	}
	int ch = 'A';
	{
		for (ch = 'A' ; ch <= 'Z' ; ch++)

			putchar(ch);
	}

	putchar('\n');
	return (0);
}
