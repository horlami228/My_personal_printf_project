#include "main.h"

int print_hexa(va_list ap)
{
    int n = va_arg(ap, int);
    int count = print_hexa_helper(n);
    return count;
}

int print_HEXA(va_list ap)
{
    int n = va_arg(ap, int);
    int count = print_HEXA_helper(n);
    return count;
}