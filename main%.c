#include "libftprintf.h"

int main ()


{


printf("***************************************\n");
	printf ("\t\t%% TEST\n");
	printf("***************************************\n\n");

    ft_printf("ft_printf:\t[]\t[%%]\n");
	printf("printf:\t\t[]\t[%%]\n");
    ft_printf("ft_printf:\t[25]\t[%25%]\n");
	printf("printf:\t\t[25]\t[%25%]\n");
    ft_printf("ft_printf:\t[025]\t[%025%]\n");
	printf("printf:\t\t[025]\t[%025%]\n");
    ft_printf("ft_printf:\t[025.2]\t[%025.2%]\n");
	printf("printf:\t\t[025.2]\t[%025.2%]\n");
    ft_printf("ft_printf:\t[.2]\t[%.2%]\n");
	printf("printf:\t\t[.2]\t[%.2%]\n");




}
