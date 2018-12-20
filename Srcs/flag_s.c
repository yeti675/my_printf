#include "../Include/header.h"

int my_putstr(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        my_putchar(str[i]);
    }
    return 0;
}

void my_putstr_va_list(va_list va)
{
    my_putstr(va_arg(va, char *));
}