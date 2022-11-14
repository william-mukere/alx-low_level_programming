#include <unistd.h>
/**
 * _islower - check whether a character is lowercase or not
 * @c: The character
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
