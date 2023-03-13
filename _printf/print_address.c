#include "main.h"

int print_address(va_list ap)
{
    unsigned long long int n = (unsigned long long int)va_arg(ap, void *);
    int count = 0;

    putchar('0');
    putchar('x');
    count += 2;
    count += print_hexa_helper(n);

    return count;
}