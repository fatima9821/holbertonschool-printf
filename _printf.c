#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string with format to print
 * Return: the number of characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			count += _putchar(*format);
		}
		else
		{
			format++;

			if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += print_string(str);
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
