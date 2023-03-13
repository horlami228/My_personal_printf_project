#include "main.h"

int print_string(va_list ap)
{
    char *s = va_arg(ap, char *);
    int count = 1;
    while(*s != '\0')
    {
        putchar(*s);
        s++;
        count++;
    }
    return count - 1;
}

int print_rev(va_list ap)
{
    // get next argument
    char *s = va_arg(ap, char *);
    int count = 0; // variable to keep track of printing
    int len = strlen(s); // lenght of string
    int j = len - 1;
    // reverse the string
    // print string
    while(j >= 0)
    {
        putchar(s[j]);
        j--;
        count++;
    }

    return count - 1;
}

int rot_13(va_list ap)
{
    char *s = va_arg(ap, char *);
    int count = 0;
    if(s == NULL)
    {
        return -1;
    }
    // loop through each characters

    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 77)
        {
            putchar(s[i] + 13);
            count++;
        }

        else if(s[i] >= 97 && s[i] <= 109)
        {
            putchar(s[i] + 13);
            count++;
        }
        else if(s[i] >= 78 && s[i] <= 90)
        {
            putchar(s[i] - 13);
            count++;
        }
        else if(s[i] >= 110 && s[i] <= 122)
        {
            putchar(s[i] - 13);
            count++;
        }
        else
        {
            putchar(s[i]);
            count++;
        }
        i++;
    }

    return count; 
}