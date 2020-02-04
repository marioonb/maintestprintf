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



printf("***************************************\n");
	printf ("\t\tINT TEST\n");
	printf("***************************************\n\n");

d = -45;
printf("\t\tFLAGS\n\n");
    ft_printf("ft_printf\tflag : [rien]\t\t[%d]\n", d);
    printf("printf:\t\tflag : [rien]\t\t[%d]\n", d);
    ft_printf("ft_printf\tflag : [-]\t\t[%-d]\n", d);
    printf("printf:\t\tflag : [-]\t\t[%-d]\n", d);

    ft_printf("ft_printf\tflag : [0]\t\t[%0d]\n", d);
    printf("printf:\t\tflag : [0]\t\t[%0d]\n", d);
   printf("return ft = %d\n", ft_printf("salut %d\n", 10));
    printf("return vr = %d\n", printf("salut %d\n", 10));


  printf("%d\n", -678);
    ft_printf("%d\n", -678);
    ft_printf("max int :  %d|\n", INT16_MAX);
    printf("max int :  %d|\n", INT16_MAX);
    ft_printf("min int :  %d|\n", INT16_MIN);
    printf("min int :  %d|\n", INT16_MIN);
    ft_printf("max int :  %d|\n", INT32_MAX);
    printf("max int :  %d|\n", INT32_MAX);
    ft_printf("min int :  %d|\n", INT32_MIN);
    printf("min int :  %d|\n", INT32_MIN);
ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    											ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", d); // renvoi [000000000000000000000-45]
    											printf("printf:\t\tflag : [024]\t\t[%024d]\n", d);	//	renvoi  [-00000000000000000000045]
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);

    ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);
    printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);

    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
   ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);



    ft_printf("ft_printf\tflag : [2]\t\t[%2d]\n", d);
    printf("printf:\t\tflag : [2]\t\t[%2d]\n", d);

    printf("\n\t\tPRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [.3]\t\t[%.3d]\n", d);
    printf("printf:\t\tflag : [.3]\t\t[%.3d]\n", d);
	ft_printf("ft_printf\tflag : [.3]\t\t[%.3d]\n", 45);
    printf("printf:\t\tflag : [.3]\t\t[%.3d]\n", 45);
    ft_printf("ft_printf\tflag : [.2]\t\t[%.2d]\n", d);
    printf("printf:\t\tflag : [.2]\t\t[%.2d]\n", d);
	ft_printf("ft_printf\tflag : [.2]\t\t[%.2d]\n", 45);
    printf("printf:\t\tflag : [.2]\t\t[%.2d]\n", 45);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42d]\n", d);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42d]\n", d);

     printf("\n\t\tWIDTH + PRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [24.42]\t\t[%24.42d]\n", d);
    printf("printf:\t\tflag : [24.42]\t\t[%24.42d]\n", d);
    ft_printf("ft_printf\tflag : [024.42]\t\t[%024.42d]\n", d);
    printf("printf:\t\tflag : [024.42]\t\t[%024.42d]\n", d);
    ft_printf("ft_printf\tflag : [0.42]\t\t[%0.42d]\n", d);
    printf("printf:\t\tflag : [0.42]\t\t[%0.42d]\n", d);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", d);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", d);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0d]\n", d);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0d]\n", d);


    ft_printf("ft_printf\tflag : [-5.3]\t\t[%-5.3d]\n", d);
    printf("printf:\t\tflag : [-5.3]\t\t[%-5.3d]\n", d);
    ft_printf("ft_printf\tflag : [.0]\t[%.0d]\n", 0);
    printf("printf:\t\tflag : [.0]\t[%.0d]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t[%0.0d]\n", 0);
    printf("printf:\t\tflag : [0.0]\t[%0.0d]\n", 0);

    ft_printf("max int :  %d|\n", INT16_MAX);
    printf("max int :  %d|\n", INT16_MAX);
    ft_printf("min int :  %d|\n", INT16_MIN);
    printf("min int :  %d|\n", INT16_MIN);
    ft_printf("max int :  %d|\n", INT32_MAX);
    printf("max int :  %d|\n", INT32_MAX);
    ft_printf("min int :  %d|\n", INT32_MIN);
    printf("min int :  %d|\n", INT32_MIN);

	d = 23232323;
 	printf("---------- int d = 23232323");

    printf("\t\tFLAGS\n\n");
    ft_printf("ft_printf\tflag : [rien]\t\t[%d]\n", d);
    printf("printf:\t\tflag : [rien]\t\t[%d]\n", d);

    ft_printf("ft_printf\tflag : [-]\t\t[%-d]\n", d);
    printf("printf:\t\tflag : [-]\t\t[%-d]\n", d);

    ft_printf("ft_printf\tflag : [0]\t\t[%0d]\n", d);
    printf("printf:\t\tflag : [0]\t\t[%0d]\n", d);

	ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", d);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", d);
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);

    ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);
    printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);

    ft_printf("ft_printf\tflag : [04]\t\t[%04d]\n", d);
    printf("printf:\t\tflag : [04]\t\t[%04d]\n", d);


    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);

    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);


    ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);


    printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);

    ft_printf("ft_printf\tflag : [2]\t\t[%2d]\n", d);
    printf("printf:\t\tflag : [2]\t\t[%2d]\n", d);
    printf("\n\t\tPRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [.3]\t\t[%.3d]\n", d);
    printf("printf:\t\tflag : [.3]\t\t[%.3d]\n", d);
    ft_printf("ft_printf\tflag : [.2]\t\t[%.2d]\n", d);
    printf("printf:\t\tflag : [.2]\t\t[%.2d]\n", d);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42d]\n", d);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42d]\n", d);



    printf("\n\t\tWIDTH + PRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [24.42]\t\t[%24.42d]\n", d);
    printf("printf:\t\tflag : [24.42]\t\t[%24.42d]\n", d);
    ft_printf("ft_printf\tflag : [024.42]\t\t[%024.42d]\n", d);
    printf("printf:\t\tflag : [024.42]\t\t[%024.42d]\n", d);
    ft_printf("ft_printf\tflag : [0.42]\t\t[%0.42d]\n", d);
    printf("printf:\t\tflag : [0.42]\t\t[%0.42d]\n", d);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", d);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", d);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0d]\n", d);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0d]\n", d);

    ft_printf("ft_printf\tflag : [-24.42]\t\t[%-24.42d]\n", d);
    printf("printf:\t\tflag : [-24.42]\t\t[%-24.42d]\n", d);

    ft_printf("ft_printf\tflag : [+++24.42]\t[%24.42d]\n", d);
    printf("printf:\t\tflag : [+++24.42]\t[%24.42d]\n", d);

    ft_printf("ft_printf\tflag : [-5.3]\t\t[%-5.3d]\n", d);
    printf("printf:\t\tflag : [-5.3]\t\t[%-5.3d]\n", d);


	printf("---------- int d = 0");
    printf("\n\t\tWIDTH + flags\n\n");
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", 0);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", 0);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    printf("printf:\t\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    printf("printf:\t\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
  printf("\n\t\tWIDTH + flags\n\n");
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", 0);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", 0);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    printf("printf:\t\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    printf("printf:\t\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
ft_printf("precision:%.0d|\n", 0);
    printf("precision:%.0d|\n", 0);


    ft_printf("ft_printf\tflag : [.0]\t[%.0d]\n", 0);
    printf("printf:\t\tflag : [.0]\t[%.0d]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t[%0.0d]\n", 0);
    printf("printf:\t\tflag : [0.0]\t[%0.0d]\n", 0);

	printf("---------- int d = 12 ou -12\n");
    ft_printf("%d\n", 12);
    printf("%d\n", 12);
    ft_printf("%d\n", -12);
    printf("%d\n", -12);

	d = -0;
	printf("------ int d = -0 \n");

	 ft_printf("ft_printf:\t[5.3]\t[%5.3d]\n", d);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", d);
    ft_printf("ft_printf:\t[]\t[%d]\n", d);
	printf("printf:\t\t[]\t[%d]\n", d);
    ft_printf("ft_printf:\t[25]\t[%25d]\n", d);
	printf("printf:\t\t[25]\t[%25d]\n", d);
    ft_printf("ft_printf:\t[-25]\t[%-25d]\n", d);
	printf("printf:\t\t[-25]\t[%-25d]\n", d);
    ft_printf("ft_printf:\t[025]\t[%025d]\n", -d);
	printf("printf:\t\t[025]\t[%025d]\n", -d);
    ft_printf("ft_printf:\t[025]\t[%025d]\n", d);
	printf("printf:\t\t[025]\t[%025d]\n", d);
    ft_printf("ft_printf:\t[1]\t[%1d]\n", d);
	printf("printf:\t\t[1]\t[%1d]\n", d);
    ft_printf("ft_printf:\t[0]\t[%0d]\n", d);
	printf("printf:\t\t[0]\t[%0d]\n", d);
    ft_printf("ft_printf:\t[-3]\t[%-3d]\n", d);
	printf("printf:\t\t[-3]\t[%-3d]\n", d);
    ft_printf("ft_printf:\t[.42]\t[%.42d]\n", d);
	printf("printf:\t\t[.42]\t[%.42d]\n", d);
    ft_printf("ft_printf:\t[.1]\t[%.1d]\n", d);
	printf("printf:\t\t[.1]\t[%.1d]\n", d);
    ft_printf("ft_printf:\t[.0]\t[%.0d]\n", d);
	printf("printf:\t\t[.0]\t[%.0d]\n", d);
    ft_printf("ft_printf:\t[.]\t[%.d]\n", d);
	printf("printf:\t\t[.]\t[%.d]\n", d);
    ft_printf("ft_printf:\t[0.0]\t[%0.0d]\n", d);
	printf("printf:\t\t[0.0]\t[%0.0d]\n", d);
    ft_printf("ft_printf:\t[-4]\t[%-4d]\n", d);
	printf("printf:\t\t[-4]\t[%-4d]\n", d);

    d = 246567;
	printf("------ int d = 246567 \n");

	ft_printf("ft_printf:\t[5.3]\t[%5.3d]\n", d);
	printf("printf:\t\t[5.3]\t[%5.3u]\n", d);
    ft_printf("ft_printf:\t[]\t[%d]\n", d);
	printf("printf:\t\t[]\t[%d]\n", d);
    ft_printf("ft_printf:\t[25]\t[%25d]\n", d);
	printf("printf:\t\t[25]\t[%25d]\n", d);
    ft_printf("ft_printf:\t[-25]\t[%-25d]\n", d);
	printf("printf:\t\t[-25]\t[%-25d]\n", d);
    										ft_printf("ft_printf:\t[025]\t[%025d]\n", -d);
											printf("printf:\t\t[025]\t[%025d]\n", -d);
    ft_printf("ft_printf:\t[025]\t[%025d]\n", d);
	printf("printf:\t\t[025]\t[%025d]\n", d);
    ft_printf("ft_printf:\t[1]\t[%1d]\n", d);
	printf("printf:\t\t[1]\t[%1d]\n", d);
    ft_printf("ft_printf:\t[0]\t[%0d]\n", d);
	printf("printf:\t\t[0]\t[%0d]\n", d);
    ft_printf("ft_printf:\t[-3]\t[%-3d]\n", d);
	printf("printf:\t\t[-3]\t[%-3d]\n", d);
    ft_printf("ft_printf:\t[.42]\t[%.42d]\n", d);
	printf("printf:\t\t[.42]\t[%.42d]\n", d);
    ft_printf("ft_printf:\t[.1]\t[%.1d]\n", d);
	printf("printf:\t\t[.1]\t[%.1d]\n", d);
    ft_printf("ft_printf:\t[.0]\t[%.0d]\n", d);
	printf("printf:\t\t[.0]\t[%.0d]\n", d);
    ft_printf("ft_printf:\t[.]\t[%.d]\n", d);
	printf("printf:\t\t[.]\t[%.d]\n", d);
    ft_printf("ft_printf:\t[0.0]\t[%0.0d]\n", d);
	printf("printf:\t\t[0.0]\t[%0.0d]\n", d);
    ft_printf("ft_printf:\t[-4]\t[%-4d]\n", d);
	printf("printf:\t\t[-4]\t[%-4d]\n", d);

printf("\n\n***************************************\n");
    printf ("\t\tINT TEST II \n");
    printf("***************************************\n\n");


	nb = -45;

	ft_printf("----------ft_printf-test-i-d----------\n");


	ft_printf("precision:%.5i|\n", nb);
	printf("precision:%.5i|\n", nb);


	ft_printf("Prec + 0:%0.5i|\n", nb);
	printf("Prec + 0:%0.5i|\n", nb);
	ft_printf("Prec + minus:%-.5i|\n", nb);
	printf("Prec + minus:%-.5i|\n", nb);
	ft_printf("size:%5i|\n", nb);
	printf("size:%5i|\n", nb);

	ft_printf("size + minus:%-5i|\n", nb);
	printf("size + minus:%-5i|\n", nb);
	ft_printf("size + 0:%05i|\n", nb);
	printf("size + 0:%05i|\n", nb);
							ft_printf("size + 0 + prec:%05.3d|\n", nb);
							printf("size + 0 + prec:%05.3d|\n", nb);
	ft_printf("size + minus + prec:%-5.3i|\n", nb);
	printf("size + minus + prec:%-5.3i|\n", nb);


}
