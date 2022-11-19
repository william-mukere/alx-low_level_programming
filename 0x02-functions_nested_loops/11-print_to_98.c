#include <unistd.h>
#include <stdio.h>
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
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
