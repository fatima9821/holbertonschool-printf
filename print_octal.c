#include "main.h"
#include "_putchar.h"
#include <stdio.h>

int print_octal(va_list args) {
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%o", num);
	write(1, buffer, length);
	return length;
}
