/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_1 : : Write a program that takes a temperature reading in Centigrade scale and
outputs its equivalent value in the Fahrenheit scale (give output upto 2 decimal places).*/;
#include <stdio.h>  
    int main()
    {
        int a;
        float b;
        scanf ("%i",&a);
        b=(a*9.00/5)+32;
        printf ("%.2f",b);
        return 0;
    }
