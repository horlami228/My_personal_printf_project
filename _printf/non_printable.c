#include "main.h"

int non_printable(va_list ap)
{
    char *c = va_arg(ap, char *);
    int count = 1;
    int cast;
    while(*c != '\0')
    {
        if(*c < 32 || *c >= 127)
        {
            putchar('\\');
            putchar('x');
            count += 2;
            cast = *c;
            putchar('0' + 0);                                  
            count += print_HEXA_helper(cast);

        }
        else
        {
            putchar(*c);
        }
        c++;
    }

    return count - 1;
}