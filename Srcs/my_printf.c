#include "../Include/header.h"

int my_printf(const char *format, ...)
{
    va_list va;
    va_start(va, format);

    Format tableau[3];
    tableau[0].flag = 'c';
    tableau[0].callsBack = my_putchar_va_list;
    tableau[1].flag = 's';
    tableau[1].callsBack = my_putstr_va_list;
    tableau[2].flag = 'd';
    tableau[2].callsBack = my_putnbr_va_list;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            int c = 0;
            i++;

            while (format[i] != tableau[c].flag)
            {
                c++;
            }

            tableau[c].callsBack(va);
        }

        else
        {
            my_putchar(format[i]);
        }
    }
    va_end(va);
    return 0;
}