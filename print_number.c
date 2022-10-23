#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer value
 * Return: the number
 */

int print_number(int n)
{
	unsigned int num = n;
	int i;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	i = _putchar((num % 10) + 48);
	return (i);
}

/**
  * count_number - count the length of a number
  *
  * @n: number
  *
  * Return: length of the number
  */
int count_number(int n)
{
	int count = 0;

	if (n == 0)
		return (1);
	
	if (n < 0)
	{
		n = -n;
		count++;
	}

	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return (count);
}
