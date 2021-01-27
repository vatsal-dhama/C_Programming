/*Author = Vatsal_Dhama_IMT2020029*/
/*problem_4 :Given two positive integers (read from the input), write a program to print
the remainder and the quotient respectively when the first integer is divided by the
second integer.*/
#include <stdio.h>  
    int main()
    {
        int a,b,c,d; /*a is the divident , b is the diviser*/
        scanf("%i %i",&a,&b);
        c=(a/b); /* c is the quotient */
        d=a%b;   /* d is the remainder */
        printf("%i %i\n",d,c);
        return 0;
    }