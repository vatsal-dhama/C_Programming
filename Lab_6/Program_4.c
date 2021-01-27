/*Author:Vatsal_Dhama@IMT2020029
Problem_4: binomial_coefficient*/

#include<stdio.h>

//calculating factorial
long double factorial(int x)
{
    long double fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

//calculating binomial coefficient
void NCR(int n,int r)
{
    long double BinoCoef;
    BinoCoef= factorial(n)/factorial(r)/factorial(n-r);
    printf("%.0Lf",BinoCoef);        
}

//main function defined and input taken
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    NCR(n,r);
}