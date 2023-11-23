#include "main.h"
#include "_putchar.h"
#include <stdio.h>

int print_address(va_list args) {
    void *addr = va_arg(args, void*);
    char buffer[20];
    int length = snprintf(buffer, sizeof(buffer), "%p", addr);
    write(1, buffer, length);
    return length;
}

