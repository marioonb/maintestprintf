#include "libftprintf.h"

int main()
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
int d_octal;
unsigned int x;
unsigned int X;

 e = 9223372036854775807;
    f = -4294967295;

    printf("***************************************\n");
	printf ("\t\tHEXA TEST\n");
	printf("***************************************\n\n");

printf("------ int X = -45 \n");
d_octal = -45;

     ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", d_octal);
    printf("printf:\t\tflag : [rien]\t\t[%X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24]\t\t[%24X]\n", d_octal);
    printf("printf:\t\tflag : [24]\t\t[%24X]\n", d_octal);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
    			ft_printf("ft_printf\tflag : [0]\t\t[%0X]\n", d_octal);
    			printf("printf:\t\tflag : [0]\t\t[%0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
    printf("printf:\t\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
    printf("printf:\t\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24X]\n", d_octal);
    printf("printf:\t\tflag : [-24]\t\t[%-24X]\n", d_octal);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", d_octal);
    printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [.42]\t\t[%.42X]\n", d_octal);
    printf("printf:\t\tflag : [.42]\t\t[%.42X]\n", d_octal);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
    ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", d_octal);
    printf("printf:\t\tflag : [rien]\t\t[%x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24]\t\t[%24x]\n", d_octal);
    printf("printf:\t\tflag : [24]\t\t[%24x]\n", d_octal);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [0]\t\t[%0x]\n", d_octal);
    printf("printf:\t\tflag : [0]\t\t[%0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
    printf("printf:\t\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
    printf("printf:\t\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24x]\n", d_octal);
    printf("printf:\t\tflag : [-24]\t\t[%-24x]\n", d_octal);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", d_octal);
    printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [.42]\t\t[%.42x]\n", d_octal);
    printf("printf:\t\tflag : [.42]\t\t[%.42x]\n", d_octal);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42x]\n", d_octal);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42x]\n", d_octal);

	printf("------ int X = 1 \n");
 nb = 1;

    printf("%x|\n", nb);
    ft_printf("%x|\n", nb);
    printf("test X:%X|\n", nb);
    ft_printf("test X:%X|\n", nb);
    printf("prec / grande:%.5X|\n", nb);
    ft_printf("prec / grande:%.5X|\n", nb);
    printf("prec / petite:%.0X|\n", nb);
    ft_printf("prec / petite:%.0X|\n", nb);
    printf("prec + 0: %0.5X|\n", nb);
    ft_printf("prec + 0: %0.5X|\n", nb);
    printf("Prec + minus:%-.5X|\n", nb);
    ft_printf("Prec + minus:%-.5X|\n", nb);
    printf("size:%5X|\n", nb);
    ft_printf("size:%5X|\n", nb);
    printf("size + prec:%7.3X|\n", nb);
    ft_printf("size + prec:%7.3X|\n", nb);
    printf("size + mminus:%-5X|\n", nb);
    ft_printf("size + mminus:%-5X|\n", nb);
    printf("size + 0:%05X|\n", nb);
    ft_printf("size + 0:%05X|\n", nb);
    printf("size + 0 + prec:%05.3X|\n", nb);
    ft_printf("size + 0 + prec:%05.3X|\n", nb);
    printf("size + minus + prec:%-5.3X|\n", nb);
    ft_printf("size + minus + prec:%-5.3X|\n", nb);

	X = 42;
    printf("------ unsigned int X = 42 \n");


    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);

    X = 0;
	printf("------ unsigned int X = 0 \n");


 ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", 0);
    printf("printf:\t\tflag : [rien]\t\t[%X]\n", 0);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", 0);
    printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", 0);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", 0);
    ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1X]\n", 0);
    printf("printf:\t\tflag : [0.1]\t\t[%0.1X]\n", 0);
    ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0X]\n", 0);
    printf("printf:\t\tflag : [1.0]\t\t[%1.0X]\n", 0);
    ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1X]\n", 0);
    printf("printf:\t\tflag : [01.1]\t\t[%01.1X]\n", 0);
    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);


     X = -1;
    printf("------ unsigned int X = -1 \n");

    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);

    X = -32767;
    printf("------ unsigned int X = -32767 \n");

    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
     ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);

    X = -0;
	printf("------ unsigned int X = -0 \n");

    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);

   printf("------ unsigned int X = -8 \n");
    X = -8;

    ft_printf("ft_printf:\t[]\t[%X]\n", X);
	printf("printf:\t\t[]\t[%X]\n", X);
    ft_printf("ft_printf:\t[3]\t[%3X]\n", X);
	printf("printf:\t\t[3]\t[%3X]\n", X);
    ft_printf("ft_printf:\t[-3]\t[%-3X]\n", X);
	printf("printf:\t\t[-3]\t[%-3X]\n", X);
     ft_printf("ft_printf:\t[-4.3]\t[%-4.3X]\n", X);
	printf("printf:\t\t[-4.3]\t[%-4.3X]\n", X);
    ft_printf("ft_printf:\t[.]\t[%.X]\n", X);
	printf("printf:\t\t[.]\t[%.X]\n", X);
    ft_printf("ft_printf:\t[.0]\t[%.0X]\n", X);
	printf("printf:\t\t[.0]\t[%.0X]\n", X);
    ft_printf("ft_printf:\t[0.]\t[%0.X]\n", X);
	printf("printf:\t\t[0.]\t[%0.X]\n", X);
    ft_printf("ft_printf:\t[0.0]\t[%0.0X]\n", X);
	printf("printf:\t\t[0.0]\t[%0.0X]\n", X);

	printf("------ unsigned int X = 42 \n");
    x = 42;

    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);

    x = 0;
printf("------ unsigned int X = 0 \n");
    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);

    ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", 0);
    printf("printf:\t\tflag : [rien]\t\t[%x]\n", 0);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", 0);
    printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", 0);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", 0);
    ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1x]\n", 0);
    printf("printf:\t\tflag : [0.1]\t\t[%0.1x]\n", 0);
    ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0x]\n", 0);
    printf("printf:\t\tflag : [1.0]\t\t[%1.0x]\n", 0);
    ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1x]\n", 0);
    printf("printf:\t\tflag : [01.1]\t\t[%01.1x]\n", 0);

     x = -1;
printf("------ unsigned int X = -1 \n");
    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);

    x = INT_MIN;
printf("------ unsigned int X = INT MIN \n");
    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);

    x = -0;
printf("------ unsigned int X = -0 \n");
    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);
printf("------ unsigned int X = -8 \n");
    x = -8;

    ft_printf("ft_printf:\t[]\t[%x]\n", x);
	printf("printf:\t\t[]\t[%x]\n", x);
    ft_printf("ft_printf:\t[3]\t[%3x]\n", x);
	printf("printf:\t\t[3]\t[%3x]\n", x);
    ft_printf("ft_printf:\t[-3]\t[%-3x]\n", x);
	printf("printf:\t\t[-3]\t[%-3x]\n", x);
    ft_printf("ft_printf:\t[-4.3]\t[%-4.3x]\n", x);
	printf("printf:\t\t[-4.3]\t[%-4.3x]\n", x);
    ft_printf("ft_printf:\t[.]\t[%.x]\n", x);
	printf("printf:\t\t[.]\t[%.x]\n", x);
    ft_printf("ft_printf:\t[.0]\t[%.0x]\n", x);
	printf("printf:\t\t[.0]\t[%.0x]\n", x);
    ft_printf("ft_printf:\t[0.]\t[%0.x]\n", x);
	printf("printf:\t\t[0.]\t[%0.x]\n", x);
    ft_printf("ft_printf:\t[0.0]\t[%0.0x]\n", x);
	printf("printf:\t\t[0.0]\t[%0.0x]\n", x);

nb2 = 0;
printf("------ unsigned int X = 0 \n");
    printf("\t-----x-----\n");

    printf("null prec : %.0x|\n", nb2);
    ft_printf("null prec : %.0x|\n", nb2);
    printf("null prec : %.x|\n", nb2);
    ft_printf("null prec : %.x|\n", nb2);
    printf("null prec : %12.0x|\n", nb2);
    ft_printf("null prec : %12.0x|\n", nb2);
    printf("null prec : %-5.x|\n", nb2);
    ft_printf("null prec : %-5.x|\n", nb2);





}
