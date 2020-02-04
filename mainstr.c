
#include "libftprintf.h"

int main ()
{
char *s;
char *str;

 printf("***************************************\n");
	printf ("\t\tSTR TEST\n");
	printf("***************************************\n\n");
printf("---------- char *str = salut");
str = "salut";

    ft_printf("ft_printf:\t[%2.2s]\n", str);
    printf("printf:\t\t[%2.2s]\n", str);
    ft_printf("test basique:%s\n", str);
    printf("test basique:%s\n", str);
    ft_printf("test basique:[%42.2s]\n", str);
    printf("test basique:[%42.2s]\n", str);
    ft_printf("precision / zero:%.0s\n", str);
    printf("precision / zero:%.0s\n", str);
    ft_printf("precision / petite:%.2s\n", str);
    printf("precision / petite:%.2s\n", str);
    ft_printf("precision / grande:[%.15s]\n", str);
    printf("precision / grande:[%.15s]\n", str);
    ft_printf("prec + minus:%-.5s\n", str);
    printf("prec + minus:%-.5s\n", str);
    ft_printf("size / petite:%5s\n", str);
    printf("size / petite:%5s\n", str);
    ft_printf("size / grande:%15s\n", str);
    printf("size / grande:%15s\n", str);
    ft_printf("Minus + size / petite:%-5s\n", str);
    printf("Minus + size / petite:%-5s\n", str);
    ft_printf("Minus + size / grande:%-15s\n", str);
    printf("Minus + size / grande:%-15s\n", str);
    ft_printf("Minus + size + prec:%-15.5s\n", str);
    printf("Minus + size + prec:%-15.5s\n", str);
ft_printf("ft_printf:\t[%s]\n", str);
    printf("printf:\t\t[%s]\n", str);
    ft_printf("ft_printf:\t[%-s]\n", str);
    printf("printf:\t\t[%-s]\n", str);
    ft_printf("ft_printf:\t[%24s]\n", str);
    printf("printf:\t\t[%24s]\n", str);
    ft_printf("ft_printf:\t[%2s]\n", str);
    printf("printf:\t\t[%2s]\n", str);
    ft_printf("ft_printf:\t[%-24s]\n", str);
    printf("printf:\t\t[%-24s]\n", str);
    ft_printf("ft_printf:\t[%-2s]\n", str);
    printf("printf:\t\t[%-2s]\n", str);
    ft_printf("ft_printf:\t[%.54s]\n", str);
    printf("printf:\t\t[%.54s]\n", str);
    ft_printf("ft_printf:\t[%.2s]\n", str);
    printf("printf:\t\t[%.2s]\n", str);
    ft_printf("ft_printf:\t[%24.2s]\n", str);
    printf("printf:\t\t[%24.2s]\n", str);
    ft_printf("ft_printf:\t[%24.54s]\n", str);
    printf("printf:\t\t[%24.54s]\n", str);

    ft_printf("ft_printf:\t[%2.2s]\n", str);
    printf("printf:\t\t[%2.2s]\n", str);

    ft_printf("ft_printf:\t[%2.54s]\n", str);
    printf("printf:\t\t[%2.54s]\n", str);
    ft_printf("ft_printf:\t[%-24.2s]\n", str);
    printf("printf:\t\t[%-24.2s]\n", str);
    ft_printf("ft_printf:\t[%-24.54s]\n", str);
    printf("printf:\t\t[%-24.54s]\n", str);
    ft_printf("ft_printf:\t[%-.54s]\n", str);
    printf("printf:\t\t[%-.54s]\n", str);
    ft_printf("ft_printf:\t[%-.2s]\n", str);
    printf("printf:\t\t[%-.2s]\n", str);
	s = "salutcava";
	printf("------ char s = salutcava \n");

	ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
    ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);

    s = NULL;
    printf("------ char s = NULL \n");


    ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
    ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);
ft_printf("NULL:%12s\n", NULL);
    printf("NULL:%12s\n", NULL);
    ft_printf("NULL:%1s\n", NULL);
    printf("NULL:%1s\n", NULL);
    ft_printf("NULL:%-5.6s\n", NULL);
    printf("NULL:%-5.6s\n", NULL);
    ft_printf("NULL:%-.8s\n", NULL);
    printf("NULL:%-.8s\n", NULL);
    ft_printf("NULL:%.12s\n", NULL);
    printf("NULL:%.12s\n", NULL);

	s = "\0";
    printf("------ char s = '0' \n");

    ft_printf("ft_printf:\t[]\t[%s]\n", s);
	printf("printf:\t\t[]\t[%s]\n", s);
    ft_printf("ft_printf:\t[-]\t[%-s]\n", s);
	printf("printf:\t\t[-]\t[%-s]\n", s);
    ft_printf("ft_printf:\t[10]\t[%10s]\n", s);
	printf("printf:\t\t[10]\t[%10s]\n", s);
    ft_printf("ft_printf:\t[.10]\t[%.10s]\n", s);
	printf("printf:\t\t[.10]\t[%.10s]\n", s);
    ft_printf("ft_printf:\t[9]\t[%9s]\n", s);
	printf("printf:\t\t[9]\t[%9s]\n", s);
    ft_printf("ft_printf:\t[.9]\t[%.9s]\n", s);
	printf("printf:\t\t[.9]\t[%.9s]\n", s);
    ft_printf("ft_printf:\t[4]\t[%4s]\n", s);
	printf("printf:\t\t[4]\t[%4s]\n", s);
    ft_printf("ft_printf:\t[.4]\t[%.4s]\n", s);
	printf("printf:\t\t[.4]\t[%.4s]\n", s);
    ft_printf("ft_printf:\t[.0]\t[%.0s]\n", s);
	printf("printf:\t\t[.0]\t[%.0s]\n", s);
    ft_printf("ft_printf:\t[.]\t[%.s]\n", s);
	printf("printf:\t\t[.]\t[%.s]\n", s);
    ft_printf("ft_printf:\t[.1]\t[%.1s]\n", s);
	printf("printf:\t\t[.1]\t[%.1s]\n", s);
    ft_printf("ft_printf:\t[1]\t[%1s]\n", s);
	printf("printf:\t\t[1]\t[%1s]\n", s);
    ft_printf("ft_printf:\t[25.2]\t[%25.2s]\n", s);
	printf("printf:\t\t[25.2]\t[%25.2s]\n", s);
    ft_printf("ft_printf:\t[2.25]\t[%2.25s]\n", s);
	printf("printf:\t\t[2.25]\t[%2.25s]\n", s);
    ft_printf("ft_printf:\t[-25]\t[%-25s]\n", s);
	printf("printf:\t\t[-25]\t[%-25s]\n", s);
    ft_printf("ft_printf:\t[-25.2]\t[%-25.2s]\n", s);
	printf("printf:\t\t[-25.2]\t[%-25.2s]\n\n", s);

	printf("------ char s = "" \n");


    ft_printf("empty:%-.5s\n", "");
    printf("empty:%-.5s\n", "");
    ft_printf("empty:%-1.32s\n", "");
    printf("empty:%-1.32s\n", "");
    ft_printf("empty:%1.4s\n", "");
    printf("empty:%1.4s\n", "");
    ft_printf("empty:%23s\n", "");
    printf("empty:%23s\n", "");

printf("------ char str = ASD ASDqw ldmj23oi4j32o u89usadjjals j238ujh4 2ojasd  ijo238e 9juasido 8123ue aklnsdk jalhdls \n");
str = "ASD ASDqw ldmj23oi4j32o u89usadjjals j238ujh4 2ojasd  ijo238e 9juasido 8123ue aklnsdk jalhdls";

 ft_printf("test basique:%s|\n", str);
    printf("test basique:%s|\n", str);
    ft_printf("precision / zero:%.0s|\n", str);
    printf("precision / zero:%.0s|\n", str);
    ft_printf("precision / petite:%.5s|\n", str);
    printf("precision / petite:%.5s|\n", str);
    ft_printf("precision / grande:%.15s|\n", str);
    printf("precision / grande:%.15s|\n", str);
    ft_printf("prec + minus:%-.5s|\n", str);
    printf("prec + minus:%-.5s|\n", str);
    ft_printf("size / petite:%5s|\n", str);
    printf("syze / petite:%5s|\n", str);
    ft_printf("size / grande:%15s|\n", str);
    printf("syze / grande:%15s|\n", str);
    ft_printf("Minus + size / petite:%-5s|\n", str);
    printf("Minus + size / petite:%-5s|\n", str);
    ft_printf("Minus + size / grande:%-15s|\n", str);
    printf("Minus + size / grande:%-15s|\n", str);
    ft_printf("Minus + size + prec:%-15.5s|\n", str);
    printf("Minus + size + prec:%-15.5s|\n", str);



}
