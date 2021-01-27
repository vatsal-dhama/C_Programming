/*Author = Vatsal_Dhama_IMT2020029*/
/*problem_3 :Write a program which takes n as input and gives the average of the
squares of the first n natural numbers. (Give output upto 2 decimal places)*/
 #include <stdio.h>  
    int main()
    {
        float n; /*n is the input integer*/
        float o; /* o is the output*/
        scanf ("%f",&n);
        o= n*(n+1)*(2*n+1)/6/n; /*direct formula for calculating sum of squares of first "n" natural numbers = n(n+1)(2n+1)/6*/
        printf ("%.2f\n",o);
        return 0;
    }