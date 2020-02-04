
#include "libftprintf.h"

int main ()
{

unsigned int u;
int nb;



printf("***************************************\n");
	printf ("\t\tUNSIGNED TEST\n");
	printf("***************************************\n\n");

	printf("------ unsigned int u = 42 \n");
	u = 42;

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = 0;
	printf("------ unsigned int u = 0 \n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

     u = -1;
	printf("------ unsigned int u = -1 \n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = INT_MIN;
	printf("------ unsigned int u = INT MIN \n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = -0;
	printf("------ unsigned int u = -0 \n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

    u = -8;
	printf("------ unsigned int u = -8 \n");

    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[-3]\t[%-3u]\n", u);
	printf("printf:\t\t[-3]\t[%-3u]\n", u);
    ft_printf("ft_printf:\t[]\t[%u]\n", u);
	printf("printf:\t\t[]\t[%u]\n", u);
    ft_printf("ft_printf:\t[3]\t[%3u]\n", u);
	printf("printf:\t\t[3]\t[%3u]\n", u);
    ft_printf("ft_printf:\t[4]\t[%4u]\n", u);
	printf("printf:\t\t[4]\t[%4u]\n", u);
    ft_printf("ft_printf:\t[.4]\t[%.4u]\n", u);
	printf("printf:\t\t[.4]\t[%.4u]\n", u);
    ft_printf("ft_printf:\t[.3]\t[%.3u]\n", u);
	printf("printf:\t\t[.3]\t[%.3u]\n", u);
    ft_printf("ft_printf:\t[5.3]\t[%5.3u]\n", u);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", u);
    ft_printf("ft_printf:\t[-5.3]\t[%-5.3u]\n", u);
	printf("printf:\t\t[-5.3]\t[%-5.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3u]\n", u);
	printf("printf:\t\t[-4.3]\t[%-4.3u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[.]\t[%.u]\n", u);
	printf("printf:\t\t[.]\t[%.u]\n", u);
    ft_printf("ft_printf:\t[.0]\t[%.0u]\n", u);
	printf("printf:\t\t[.0]\t[%.0u]\n", u);
    ft_printf("ft_printf:\t[0.]\t[%0.u]\n", u);
	printf("printf:\t\t[0.]\t[%0.u]\n", u);
    ft_printf("ft_printf:\t[0.0]\t[%0.0u]\n", u);
	printf("printf:\t\t[0.0]\t[%0.0u]\n", u);
    ft_printf("ft_printf:\t[019.21]\t[%019.21u]\n", u);
	printf("printf:\t\t[019.21]\t[%019.21u]\n\n", u);

nb = 23;
printf("------ unsigned int u = 23 \n");
    printf("precision:%.5u|\n", nb);
    ft_printf("precision:%.5u|\n", nb);
    printf("Prec + 0:%0.5u|\n", nb);
    ft_printf("Prec + 0:%0.5u|\n", nb);
    printf("Prec + minus:%-.5u|\n", nb);
    ft_printf("Prec + minus:%-.5u|\n", nb);
    printf("size:%5u|\n", nb);
    ft_printf("size:%5u|\n", nb);
    printf("size + minus:%-5u|\n", nb);
    ft_printf("size + minus:%-5u|\n", nb);
    printf("size + 0:%05u|\n", nb);
    ft_printf("size + 0:%05u|\n", nb);
    printf("size + 0 + prec:%05.3u|\n", nb);
    ft_printf("size + 0 + prec:%05.3u|\n", nb);
    printf("size + minus + prec:%-5.3u|\n", nb);
    ft_printf("size + minus + prec:%-5.3u|\n", nb);
    printf("%-5.3u|\n", nb);
    ft_printf("%-5.3u|\n", nb);
    printf("%-1.45u|\n", nb);
    ft_printf("%-1.45u|\n", nb);
    printf("%-55.35u|\n", nb);
    ft_printf("%-55.35u|\n", nb);






}
