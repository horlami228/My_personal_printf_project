#include "main.h"

int _printf(const char *format, ...)
{
    int count = 1;
    va_list ap;
    va_start(ap, format);
    int i;

    print_f convert[] =
    {
        {'c', print_char},
        {'s', print_string},
        {'i', print_digit},
        {'d', print_digit},
        {'b', convert_binary},
        {'%', print_percent},
        {'x', print_hexa},
        {'X', print_HEXA},
        {'S', non_printable},
        {'p', print_address},
        {'r', print_rev},
        {'R', rot_13}
    };


    if (format == NULL || format[0] == '%' && format[1] == '\0')
    {
        return -1;
    }
    
    while(*format != '\0')
    {
        if(*format == '%')
        {
            format++;
        
            for(i = 0; i < sizeof(convert) / sizeof(convert[0]); i++)
        {
            if(convert[i].per == *format)
            {
                count += convert[i].func(ap);
            }
        }
        }
        else
        {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(ap);
    return count - 1;
    
}