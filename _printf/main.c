#include "main.h"

int main(void)
{
    char c = 'H';
    char *s = "Hello, World!";
    int d = 14259;
    int a, b, j, e;
    e = 1024;
    int *p = &d;
    void *add;
    add = (void *)0x7fff5100b608;


   a = _printf("%p", &a);
   putchar(10);
   a = printf("%p", &a);
   putchar(10);
   //printf("%d", a);
   //print_hexa(14259);
   //putchar(10);
   //print_HEXA(14259);
   //putchar(10);

   //ssize_t lekan = write(0, s, sizeof(s));
   //int lekan1 = open("lekan.txt", O_RDONLY);
   b = _printf("%R\n", s);
   _printf("%d", b);
   putchar(10);

   int len, len2;

	//len = _printf("%+d", 1024);
	//len2 = printf("%+d", 1024);

	len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	len2 = printf("Complete the sentence: You know nothing, Jon Snow.\n");

    printf("%.0d", 0);

    printf("In the middle %.6d of a sentence.\n", 1024);



}