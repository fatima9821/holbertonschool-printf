#include "main.h"
#include "_putchar.h"

int print_unknown(va_list args) {
	(void)args;
	write(1, "%r", 2);
	return 2;
}

