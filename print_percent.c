#include "main.h"
#include "_putchar.h"

int print_percent(va_list args) {
	(void)args;
	_putchar('%');
	return 2;
}
