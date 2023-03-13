#include "main.h"

int print_char(va_list ap)
{
    int c = va_arg(ap, int);
    int count = 1;
    putchar(c);


    return count;
}

int print_percent(va_list ap)
{
    
    int count = 1;
    putchar('%');
    
    return count;
}