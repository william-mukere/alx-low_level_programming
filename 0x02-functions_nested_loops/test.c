#include <unistd.h>

int _putchar(char c)
{
	char ch = "a";
	_putchar(ch);
	return(write(1, &c, 1));
}
