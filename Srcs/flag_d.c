#include "../Include/header.h"

void my_putnbr(int nb)
{
    nb = my_isneg(nb);

    if (nb < 10)
    {
        afficherChiffre(nb);
    }
    else
    {
        my_putnbr(nb / 10);
        afficherChiffre(nb % 10);
    }
}

void afficherChiffre(int nbr)
{
    my_putchar(nbr + '0');
}

int my_isneg(int nb)
{

    if (nb < 0)
    {
        my_putchar('-');
        return (nb * -1);
    }

    else
    {
        return nb;
    }
}

void my_putnbr_va_list(va_list va)
{
    my_putnbr(va_arg(va, int));
}