#include "main.h"

int print_digit(va_list ap)
{
   int n = va_arg(ap, int);
   int count;
   count = func_d(n);
   return count;
}

int convert_binary(va_list ap)
{
    int n = va_arg(ap, int);
    char binary[250];
    int i = 0;
    int count = 1;
    while(n != 0)
    {
        if(n % 2 == 0)
        {
            binary[i] = '0';
        }
        else
        {
            binary[i] = '1';
        }

        n = n / 2;
        i++;
    }

    binary[i] = '\0';
    // reverse the order
    int len = strlen(binary);
    i = 0;
    char temp;

    while(i < len / 2)
    {
        temp = binary[i];
        binary[i] = binary[len - i - 1];
        binary[len - i - 1] = temp;
        i++;
    }
    // print it out
    i = 0; 
    while(binary[i] != '\0')
    {
        putchar(binary[i]);
        i++;
        count++;
    }

    return count - 1;
}