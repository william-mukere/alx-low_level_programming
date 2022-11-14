#include <unistd.h>
/**
 * _isalpha - check whether a character is lowercase or not
 * @c: The character
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
