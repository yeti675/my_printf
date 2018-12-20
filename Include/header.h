#ifndef HEADER_H_
#define HEADER_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int my_printf(const char *format, ...);

void my_putchar_va_list(va_list va);
void my_putchar(char c);

void my_putstr_va_list(va_list va);
int my_putstr(const char *str);

void my_putnbr_va_list(va_list va);
int my_isneg(int nb);
void afficherChiffre(int nbr);
void my_putnbr(int nb);

void testFlag_s();
void testFlag_d();
void testAllFlags();

typedef struct Format Format;
struct Format
{
    char flag;
    void (*callsBack)(va_list va);
};

#endif /*HEADER_H_*/