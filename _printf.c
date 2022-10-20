#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
  * _printf - Printf function
  * @format: string to be formatted
  * @...: variable/input to format
  * Return: 0
  */

int _printf(const char *format, ...)
{
	char *str;
	char rest;
	int i = 0, ch, count = 0, _int, dec;

	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count++;
				_putchar('%');
			}
			switch (format[i + 1])
			{
				case 'c':
					ch = (char)va_arg(ap, int);
					_putchar(ch);
					count++;
					break;
				case 's':
					str = va_arg(ap, char*);
					_string(str, strlen(str));
					count = count + strlen(str);
					break;
				case 'i':
					_int = va_arg(ap, int);
					print_number(_int);
					count = count + count_number(_int);
					break;
				case 'd':
					dec = va_arg(ap, int);
					print_number(dec);
					count = count + count_number(dec);
					break;
			}
			i = i + 2;
		}
		else
		{
			rest = format[i];
			_putchar(rest);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
