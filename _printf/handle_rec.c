#include "main.h"

int func_d(int n)
{
     static int count = 1;
    if(n < 0)
    {
        putchar('-');
        n = -n;
    }
    if(n < 10)
    {
        putchar('0' + n);
    }
    else
    {   count++;
        func_d(n / 10);
        putchar('0' + (n % 10));
    }
    return count;
}

int print_HEXA_helper(int n)
{
    char buffer_hex[50];
    int i = 0;
    int count = 0;
    while(n > 0)
    {
        int remain = n % 16;
        if(remain < 10)
        {
            buffer_hex[i] = '0' + remain;
        }
        else
        {
            buffer_hex[i] = 'A' + (remain - 10);
        }

        n = n / 16;
        i++;
    }

    buffer_hex[i] = '\0';

    // lets reverse it
    int len = strlen(buffer_hex);
    char temp;
    int j = 0;

    while(j < len / 2)
    {
        temp = buffer_hex[j];
        buffer_hex[j] = buffer_hex[len - j - 1];
        buffer_hex[len - j - 1] = temp;
        j++;
    }

    // print it out
    i = 0;
    while(buffer_hex[i] != '\0')
    {
        putchar(buffer_hex[i]);
        count++;
        i++;
    }

    return count - 1;
}

int print_hexa_helper(unsigned long long int n)
{
    char buffer_hex[50];
    int i = 0;
    int count = 0;
    while(n > 0)
    {
        int remain = n % 16;
        if(remain < 10)
        {
            buffer_hex[i] = '0' + remain;
        }
        else
        {
            buffer_hex[i] = 'a' + (remain - 10);
        }

        n = n / 16;
        i++;
    }

    buffer_hex[i] = '\0';

    // lets reverse it
    int len = strlen(buffer_hex);
    char temp;
    int j = 0;

    while(j < len / 2)
    {
        temp = buffer_hex[j];
        buffer_hex[j] = buffer_hex[len - j - 1];
        buffer_hex[len - j - 1] = temp;
        j++;
    }

    // print it out
    i = 0;
    while(buffer_hex[i] != '\0')
    {
        putchar(buffer_hex[i]);
        count++;
        i++;
    }

    return count - 1;
}   