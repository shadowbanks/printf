#include <stdarg.h>
#include <string.h>
#include <unistd.h>
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
	int i = 0, ch;

	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			switch (format[i + 1])
			{
				case 'c':
					ch = (char)va_arg(ap, int);
					_putchar(ch);
					break;
				case 's':
					str = va_arg(ap, char*);
					write(1, str, strlen(str));
					break;
			}
			i = i + 2;
		}
		else
		{
			rest = format[i];
			_putchar(rest);
			i++;
		}
	}
	va_end(ap);
	return (0);
}

