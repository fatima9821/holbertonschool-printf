#include "main.h"
#include "_putchar.h"

int print_char(va_list args) {
	char c = (char)va_arg(args, int);
	_putchar(c);
	return 1;
}

