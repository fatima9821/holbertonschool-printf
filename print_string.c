#include "main.h"
#include "_putchar.h"

int print_string(va_list args) {
	char *str = va_arg(args, char*);
	int char_count = 0;
	while (*str != '\0') {
		_putchar(*str);
		str++;
		char_count++;
	}
	return char_count;
}

