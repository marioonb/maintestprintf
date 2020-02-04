

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



printf("-------------------10.*d 5, 42\n");

ft_printf("ftprintf\t%10.*d|\n", 5, 42);
  printf("printf..\t%10.*d|\n\n", 5, 42);

printf("-------------------10.*d -5, 42\n");

   ft_printf("ftprintf\t%10.*d|\n", -5,42);
  printf("printf..\t%10.*d|\n\n", -5, 42);

   ft_printf("ftprintf\t%10.*d|\n", 10, -42);
    printf("printf..\t%10.*d|\n\n", 10, -42);

printf("-------------------10.*d 10, -42\n");

   ft_printf("ftprintf\t%10.*d|\n", 10, -42);
   printf("printf..\t%10.*d|\n\n", 10, -42);

   printf("-------------------10.*d -10, -55\n");

    ft_printf("ftprintf\t%10.*d|\n", -10,  -55);
   printf("printf..\t%10.*d|\n\n", -10, -55);

   printf("-------------------10.*d -10, 42\n");

   ft_printf("ftprintf\t%10.*d|\n", -10,  42);
    printf("printf..\t%10.*d|\n\n", -10,  42);

	printf("-------------------10.*d 10, -42\n");

   ft_printf("ftprintf\t%10.*d|\n", 10,  -42);
    printf("printf..\t%10.*d|\n\n", 10, -42);

///////////////////////////
printf("-------------------010.*d 10, 42\n");

ft_printf("ftprintf\t%010.*d|\n", 10, 42);
   printf("printf..\t%010.*d|\n\n", 10, 42);

printf("-------------------010.*d -10, 42\n");

  ft_printf("ftprintf\t%010.*d|\n", -10, 42);
printf("printf..\t%010.*d|\n\n", -10,42);

printf("-------------------010.*d 10, -42\n");

   ft_printf("ftprintf\t%010.*d|\n", 10, -42);
   printf("printf..\t%010.*d|\n\n", 10, -42);



  printf("-------------------010.*d -10, -55\n");

   ft_printf("ftprintf\t%010.*d|\n", -10, -55);
   printf("printf..\t%010.*d|\n\n", -10, -55);

   printf("-------------------010.*d -10, 42\n");

   ft_printf("ftprintf\t%010.*d|\n", -10, 42);
   printf("printf..\t%010.*d|\n\n", -10, 42);




/////////////////// qgrfkqjsdgfqjkslhdfgqleizgflqsgfljskgfljksqfgkjhgf///////////////////////

printf("-------------------*.10d 10, 42\n");

ft_printf("ftprintf\t%*.10d|\n", 10, 42);
  printf("printf..\t\%*.10d|\n\n", 10, 42);

printf("-------------------*.10d -10, 42\n");

   ft_printf("ftprintf\t%*.10d|\n", -10,42);
  printf("printf..\t\%*.10d|\n\n", -10, 42);



   printf("-------------------*.10d -10, -55\n");

    ft_printf("ftprintf\t%*.10d|\n", -10,  -55);
   printf("printf..\t%*.10d|\n\n", -10, -55);

   printf("-------------------*.10d -10, 42\n");

   ft_printf("ftprintf\t%*.10d|\n", -10,  42);
    printf("printf..\t%*.10d|\n\n", -10,  42);

	printf("-------------------*.10d 10, -42\n");

   ft_printf("ftprintf\t%*.10d|\n", 10,  -42);
    printf("printf..\t%*.10d|\n\n", 10, -42);

///////////////////////////

printf("-------------------0*.10d  10, 42\n");

ft_printf("ftprintf\t%0*.10d|\n", 10, 42);
   printf("printf..\t%0*.10d|\n\n", 10, 42);

   printf("-------------------0*.10d  -10, 42\n");

  ft_printf("ftprintf\t%0*.10d|\n", -10, 42);
printf("printf..\t%0*.10d|\n\n", -10,42);

printf("-------------------0*.10d  10, -42\n");

   ft_printf("ftprintf\t%0*.10d|\n", 10, -42);
   printf("printf..\t%0*.10d|\n\n", 10, -42);

   printf("-------------------0*.10d  10, -42\n");

ft_printf("ftprintf\t%0*.10d|\n", 10, -42);
  printf("printf..\t%0*.10d|\n\n", 10, -42);

  printf("-------------------0*.10d  -10, -55\n");

   ft_printf("ftprintf\t%0*.10d|\n", -10, -55);
   printf("printf..\t%0*.10d|\n\n", -10, -55);

   printf("-------------------0*.10d  -10, 42\n");

   ft_printf("ftprintf\t%0*.10d|\n", -10, 42);
   printf("printf..\t%0*.10d|\n\n", -10, 42);

printf("-------------------0*.10d  10, -42\n");

   ft_printf("ftprintf\t%0*.10d|\n", 10, -42);
   printf("printf..\t%0*.10d|\n\n", 10, -42);


//////////////////////////////////////////
printf("-------------------*.*d  10, 5, 42\n");

ft_printf("ftprintf\t%*.*d|\n", 10, 5, 42);
  printf("printf..\t%*.*d|\n\n", 10, 5, 42);

  printf("-------------------*.*d  -10, 5, 42\n");

 ft_printf("ftprintf\t%*.*d|\n", -10, 5, 42);
 printf("printf..\t%*.*d|\n\n", -10, 5, 42);

 printf("-------------------*.*d  10, -5,  -42\n");

   ft_printf("ftprintf\t%*.*d|\n", 10, -5, -42);
  printf("printf..\t%*.*d|\n\n", 10, -5, -42);

printf("-------------------*.*d  10, 5, -42\n");

  ft_printf("ftprintf\t%*.*d|\n", 10, 5, -42);
   printf("printf..\t%*.*d|\n\n", 10, 5, -42);

printf("-------------------*.*d  -10, -5, -55\n");

  ft_printf("ftprintf\t%*.*d|\n", -10, -5, -55);
  printf("printf..\t%*.*d|\n\n", -10, -5, -55);

  printf("-------------------*.*d  -10, -5, 42\n");

   ft_printf("ftprintf\t%*.*d|\n", -10, -5, 42);
   printf("printf..\t%*.*d|\n\n", -10, -5, 42);

   printf("-------------------*.*d  10, -5, -42\n");

    ft_printf("ftprintf\t%*.*d|\n", 10, -5, -42);
    printf("printf..\t%*.*d|\n\n", 10, -5, -42);

//////////////////////////

printf("-------------------0*.*d  10, 5,  42\n");

ft_printf("ftprintf\t%0*.*d|\n", 10, 5, 42);
  printf("printf..\t%0*.*d|\n\n", 10, 5, 42);

  printf("-------------------0*.*d  -10, 5,  42\n");

   ft_printf("ftprintf\t%0*.*d|\n", -10, 5, 42);
    printf("printf..\t%0*.*d|\n\n", -10, 5, 42);

printf("-------------------0*.*d  10, -5,  -42\n");

   ft_printf("ftprintf\t%0*.*d|\n", 10, -5, -42);
   printf("printf..\t%0*.*d|\n\n", 10, -5, -42);

printf("-------------------0*.*d  10, 5, -42\n");

  ft_printf("ftprintf\t%0*.*d|\n", 10, 5, -42);
    printf("printf..\t%0*.*d|\n\n", 10, 5, -42);

printf("-------------------0*.*d  -10, -5, -55\n");

    ft_printf("ftprintf\t%0*.*d|\n", -10, -5, -55);
    printf("printf..\t%0*.*d|\n\n", -10, -5, -55);

printf("-------------------0*.*d  -10, -5,  42\n");

    ft_printf("ftprintf\t%0*.*d|\n", -10, -5, 42);
    printf("printf..\t%0*.*d|\n\n\n", -10, -5, 42);

printf("-------------------0*.*d  10, -5,  -42\n");

   ft_printf("ftprintf\t%0*.*d|\n", 10, -5, -42);
     printf("printf..\t%0*.*d|\n\n", 10, -5, -42);

printf("-------------------0*.*d  10, 15,  42\n");

   ft_printf("ftprintf\t%0*.*d|\n", 10, 15, 42);
    printf("printf..\t%0*.*d|\n\n", 10, 15, 42);

	printf("-------------------0*.*d  -10, 15,  42\n");

    ft_printf("ftprintf\t%0*.*d|\n", -10, 15, 42);
   printf("printf..\t%0*.*d|\n\n", -10, 15, 42);

printf("-------------------0*.*d  10, -15,  42\n");

    ft_printf("ftprintf\t%0*.*d|\n", 10, -15, 42);
    printf("printf..\t%0*.*d|\n\n", 10, -15, 42);

printf("-------------------0*.*d  10, 15, -42\n");

    ft_printf("ftprintf\t%0*.*d|\n", 10, 15, -42);
    printf("printf..\t%0*.*d|\n\n", 10, 15, -42);

printf("-------------------0*.*d  -10, -15, -42\n");

    ft_printf("ftprintf\t%0*.*d|\n", -10, -15, -42);
   printf("printf..\t%0*.*d|\n\n", -10, -15, -42);

printf("-------------------0*.*d  -10, -15,  42\n");

    ft_printf("ftprintf\t%0*.*d|\n", -10, -15, 42);
    printf("printf..\t%0*.*d|\n\n", -10, -15, 42);

printf("-------------------0*.*d  10, -15, -42\n");

    ft_printf("ftprintf\t%0*.*d|\n", 10, -15, -42);
    printf("printf..\t%0*.*d|\n\n", 10, -15, -42);

printf("-------------------*.*d  10, 5,  42\n");



    ft_printf("ftprintf\t%*.*d|\n", 10, 5, 42);
printf("printf..\t%*.*d|\n\n", 10, 5, 42);

ft_printf("ftprintf\t%*.*d|\n", -10, 5, 42);
 printf("printf..\t%*.*d|\n\n", -10, 5, 42);
ft_printf("ftprintf\t%*.*d|\n", 10, -5, 42);
   printf("%*.*d|\n\n", 10, -5, 42);


printf("-------------------11111111\n");

  ft_printf("ftprintf\t%*.*d|\n", 10, 5, -55);
    printf("printf..\t%*.*d|\n\n", 10, 5, -55);

  ft_printf("ftprintf\t%10.5d|\n", -55);
   printf("printf..\t%10.5d|\n\n", -55);


printf("-------------------22222222\n");



    ft_printf("ftprintf\t%*.*d|\n", -10, -5, -42);
    printf("printf..\t%*.*d|\n\n", -10, -5, -42);

   ft_printf("ftprintf\t%*.*d|\n", -10, -5, 42);
  printf("printf..\t%*.*d|\n\n", -10, -5, 42);

   ft_printf("ftprintf\t%*.*d|\n", 10, -5, -42);
   printf("printf..\t%*.*d|\n\n", 10, -5, -42);

printf("\n");
printf("\n");
printf("-------------------3333333333\n");
  ft_printf("ftprintf\t%*.*d|\n", 10, 15, 42);
   printf("printf..\t%*.*d|\n\n", 10, 15, 42);

    ft_printf("ftprintf\t%*.*d|\n", -10, 15, 42);
    printf("printf..\t%*.*d|\n\n", -10, 15, 42);

   ft_printf("ftprintf\t%*.*d|\n", 10, -15, 42);
    printf("printf..\t%*.*d|\n\n", 10, -15, 42);


printf("-------------------444444444\n");


    ft_printf("ftprintf\t%*.*d|\n", 10, 15, -55);
   printf("printf..\t%*.*d|\n\n", 10, 15, -55);

  ft_printf("ftprintf\t%10.15d|\n", -55);
    printf("printf..\t%10.15d|\n\n", -55);



printf("-------------------555555555\n");

   ft_printf("ftprintf\t%*.*d|\n", -10, -15, -42);
    printf("printf..\t%*.*d|\n\n", -10, -15, -42);

    ft_printf("ftprintf\t%*.*d|\n", -10, -15, 42);
    printf("printf..\t%*.*d|\n\n", -10, -15, 42);

   ft_printf("ftprintf\t%*.*d|\n", 10, -15, -42);
    printf("printf..\t%*.*d|\n\n", 10, -15, -42);



	nb = 42;
  c = 'a';
    d = -45;

str = "salut";





int width = 5;
	int prec = 3;
	printf("-----------------------NORMAL------------------------------\n");




	printf("------------------------WIDTH------------------------------\n");
	printf("d-----------------------POSITIF----------------------------\n");

	printf("printf..\tmoins :%-*d|\n",width, 12);
	ft_printf("ftprintf\tmoins :%-*d|\n\n",width, 12);
	printf("printf..\t0     :%0*d|\n",width, 12);
	ft_printf("ftprintf\t0     :%0*d|\n\n",width, 12);

	printf("d-----------------------NEGATIF----------------------------\n");

	printf("printf..\t0     :%0*d|\n",width, -12);
	ft_printf("ft_printf\t0     :%0*d|\n",width, -12);

	printf("------------------------PRECISION---------------------------\n");
	printf("d-----------------------POSITIF-----------------------------\n");


	printf("printf..\tmoins :%-.*d|\n",prec, 12);
	ft_printf("ftprintf\tmoins :%-.*d|\n\n",prec, 12);
	printf("printf..\t0     :%0.*d|\n",prec, 12);
	ft_printf("ftprintf\t0     :%0.*d|\n\n",prec, 12);
	printf("f----------------------------------------------------------\n");



	printf("d-----------------------NEGATIF-----------------------------\n");


	printf("printf..\tmoins :%-.*d|\n",prec, -12);
	ft_printf("ftprintf\tmoins :%-.*d|\n\n",prec, -12);
	printf("printf..\t0     :%0.*d|\n",prec, -12);
	ft_printf("ftprintf\t0     :%0.*d|\n\n",prec, -12);


	printf("------------------------DOUBLETTE---------------------------\n");
	printf("------------------------POSITIF-----------------------------\n");


	printf("printf..\tmoins :%-*.*d|\n",width,prec, 12);
	ft_printf("ftprintf\tmoins :%-*.*d|\n\n",width,prec, 12);
	printf("printf..\t0     :%0*.*d|\n",width,prec, 12);
	ft_printf("ftprintf\t0     :%0*.*d|\n\n",width,prec, 12);
	printf("-----------------------------------------------------------\n");

	printf("------------------------NEGATIF-----------------------------\n");

	printf("printf..\tmoins :%-*.*d|\n",width,prec, -12);
	ft_printf("ftprintf\tmoins :%-*.*d|\n\n",width,prec, -12);
	printf("printf..\t0     :%0*.*d|\n",width,prec, -12);
	ft_printf("ftprintf\t0     :%0*.*d|\n\n",width,prec, -12);

 }




