#include "main.h"
#include "_putchar.h"
#include <stdio.h>

int print_int(va_list args) {
    int num = va_arg(args, int);
    char buffer[20];
    int length = snprintf(buffer, sizeof(buffer), "%d", num);
    write(1, buffer, length);
    return length;
}
