#include <stdio.h>
	/**
	 * main -Entry point of program
	 *
	 * return : 0
	 */
	int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	printf("Size of int: %Zu bytes\n", sizeof(intType));
	printf("Size of float: %Zu bytes\n", sizeof(floatType));
	printf("Size of double: %Zu bytes\n", sizeof(doubleType));
	printf("Size of char: %Zu bytes\n", sizeof(charType));
	return (0);

}
