#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>

struct print
{
    char per;
    int (*func)(va_list ap);
};

typedef struct print print_f;

int print_char(va_list ap);
int print_string(va_list ap);
int print_digit(va_list ap);
int convert_binary(va_list ap);
int _printf(const char *format, ...);
int print_percent(va_list ap);
int func_d(int n);
int print_hexa(va_list ap);
int print_HEXA(va_list ap);
int non_printable(va_list ap);
int print_HEXA_helper(int n);
int print_address(va_list ap);
int print_hexa_helper(unsigned long long int);
int print_rev(va_list ap);
int rot_13(va_list ap);