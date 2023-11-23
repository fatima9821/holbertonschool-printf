#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include "_putchar.h"

int _printf(const char *format, ...) {
	va_list args;
	int char_count = 0;

	va_start(args, format);

	while (*format != '\0') {
		if (*format == '%') {
			format++;

			if (*format == 'c') {
				print_char(args);
			}
			else if (*format == 's') {
				print_string(args);
			}
			else if (*format == '%') {
				print_percent(args);
				char_count++;
			}
			else if (*format == 'd' || *format == 'i') {
				print_int(args);
			}
			else if (*format == 'u') {
				print_unsigned(args);
			}
			else if (*format == 'o') {
				print_octal(args);
			}
			else if (*format == 'x') {
				print_hex(args);
			}
			else if (*format == 'X') {
				print_unsigned_hex(args);
			}
			else if (*format == 'p') {
				print_address(args);
			}
			else if (*format == 'r') {
				print_unknown(args);
			}
			else {
				_putchar('%');
				char_count++;
				_putchar(*format);
				char_count++;
			}
		}
		else {
			_putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return char_count;
}
