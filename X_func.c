include "main.h"

/**
 * X_func - a function to handle "%X" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int X_func(char *buffer, va_list ap)
{
	int digit = va_arg(ap, int);
	int len = 0;
	int temp;

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}

	else
	{
	if (digit < 0)
	{
		*buffer++ = '-';
		digit = -digit;
		len++;
	}

	temp = digit;

	while (temp)
	{

		temp /= 16;
		len++;
	}
	}

	while (digit)
	{
		remainder = digit % 16;
		char c;

	if (remainder < 10)
	{
		c = '0' + remainder;
	}

	else
	{

		c = 'A' + (remainder - 10);
	}

	*buffer++ = c;
	digit /= 16;
	len--;
	}


	*buffer = '\0';

	return (len);
}