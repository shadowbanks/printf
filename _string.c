#include <unistd.h7>

/**
 * _string - prints a string
 * @str: the string to be printed
 * @n: the length of the string
 * Return: string
 */

int _string(char *str, int n)
{
	return (write(1, str, n));
}
