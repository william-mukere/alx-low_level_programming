#include  <stdio.h>
/**
 * main -Entry point of the program.
 * Return: Always  0 (Success)
 */
int main(void)
{
	int n = '0';

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
		if  (n == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
