#include "../Include/header.h"

void testFlag_c()
{

    my_printf("\n");
    puts("===== %c =====");
    puts("my_printf(\"thomas == %c\", \'9\');");
    my_printf("thomas == %c\n", '9');
    my_printf("\n");
}

void testFlag_s()
{
    puts("===== %s =====");
    puts("my_printf(\"thomas == %s\", \"nathan\");");
    my_printf("thomas == %s\n", "nathan");
    my_printf("\n");
}

void testFlag_d()
{
    puts("===== %d =====");
    puts("my_printf(\"thomas == %d\", 27);");
    my_printf("thomas == %d\n", 27);
    my_printf("\n");
}

void testAllFlags()
{
    puts("===== %c %s %d =====");
    puts("my_printf(\"thomas == %c %s %d\", \'9\',\"nathan\", 27);");
    my_printf("thomas == %c %s %d\n", '9', "nathan", 27);

}