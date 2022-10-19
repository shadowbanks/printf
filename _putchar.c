#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character value
 * Return: the character
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
