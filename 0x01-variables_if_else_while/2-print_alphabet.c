#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * Return:Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A' ; x <= 'Z' ; x++)
	{
		lower_x = tolower(x);
		putchar(tolower(lower_x));
	}

	return (0);
}
