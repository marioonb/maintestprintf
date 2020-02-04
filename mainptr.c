
#include "libftprintf.h"

int main ()

{

	 int d;

unsigned int u;
char *str;
int doub;
int nb;

unsigned short us_octal;
short si;
long int e;
unsigned int nb2;
long long f;
char c;
char *s;

  c = 'a';
    d = 42;

	s = "gfgfgf";

    printf("***************************************\n");
	printf ("\t\tPTR TEST\n");
	printf("***************************************\n\n");

nb = 6;
ft_printf("adq = %p|\n", &c);
    printf("adr = %p|\n", &c);
  ft_printf("sqr = %-100s|\n", s);
    printf("str = %-100s|\n", s);
    ft_printf("%5p|\n", &nb);
    printf("%5p|\n", &nb);
    ft_printf("%-15p|\n", &nb);
    printf("%-15p|\n", &nb);
    ft_printf("%-5p|\n", &nb);
    printf("%-5p|\n", &nb);
    ft_printf("%42p|\n", &nb);
    printf("%42p|\n", &nb);
    ft_printf("%-18p|\n", &nb);
    printf("%-18p|\n", &nb);
    ft_printf("%42p|\n", &nb);
    printf("%42p|\n", &nb);

    ft_printf("ft_printf:\t[]\t[%p]\n", &c);
	printf("printf:\t\t[]\t[%p]\n", &c);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &c);
	printf("printf:\t\t[25]\t[%25p]\n", &c);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &c);
	printf("printf:\t\t[5]\t[%5p]\n", &c);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &c);
	printf("printf:\t\t[1]\t[%1p]\n", &c);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &c);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &c);
    ft_printf("ft_printf:\t[]\t[%p]\n", &d);
	printf("printf:\t\t[]\t[%p]\n", &d);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &d);
	printf("printf:\t\t[25]\t[%25p]\n", &d);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &d);
	printf("printf:\t\t[5]\t[%5p]\n", &d);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &d);
	printf("printf:\t\t[1]\t[%1p]\n", &d);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &d);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &d);

    d = INT_MAX;

    ft_printf("ft_printf:\t[]\t[%p]\n", &d);
	printf("printf:\t\t[]\t[%p]\n", &d);
    ft_printf("ft_printf:\t[25]\t[%25p]\n", &d);
	printf("printf:\t\t[25]\t[%25p]\n", &d);
    ft_printf("ft_printf:\t[5]\t[%5p]\n", &d);
	printf("printf:\t\t[5]\t[%5p]\n", &d);
    ft_printf("ft_printf:\t[1]\t[%1p]\n", &d);
	printf("printf:\t\t[1]\t[%1p]\n", &d);
    ft_printf("ft_printf:\t[-25]\t[%-25p]\n", &d);
	printf("printf:\t\t[-25]\t[%-25p]\n\n", &d);






printf("\n\n***************************************\n");
    printf ("\t\tPTR TEST\n");
    printf("***************************************\n\n");

    ft_printf("ft_printf:\t[%p]\n", &c);
    printf("printf:\t\t[%p]\n", &c);
    ft_printf("ft_printf:\t[%2p]\n", &c);
    printf("printf:\t\t[%2p]\n", &c);
    ft_printf("ft_printf:\t[%24p]\n", &c);
    printf("printf:\t\t[%24p]\n", &c);
    ft_printf("ft_printf:\t[%-p]\n", &c);
    printf("printf:\t\t[%-p]\n", &c);
    ft_printf("ft_printf:\t[%-2p]\n", &c);
    printf("printf:\t\t[%-2p]\n", &c);
    ft_printf("ft_printf:\t[%-24p]\n", &c);
    printf("printf:\t\t[%-24p]\n", &c);
    ft_printf("ft_printf:\t[%-24p]\n", &e);
    printf("printf:\t\t[%-24p]\n", &e);


}
