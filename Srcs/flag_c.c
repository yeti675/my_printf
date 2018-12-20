#include "../Include/header.h"

void my_putchar_va_list(va_list va)
{
    my_putchar(va_arg(va, int));
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
