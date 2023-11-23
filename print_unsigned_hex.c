#include "main.h"
#include "_putchar.h"
#include <stdio.h>
#include <stdarg.h>

int print_unsigned_hex(va_list args) {
    unsigned int num = va_arg(args, unsigned int);
    char buffer[20];
    int length = snprintf(buffer, sizeof(buffer), "%X", num);
    write(1, buffer, length);
    return length;
}
