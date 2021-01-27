/*Author:Vatsal_Dhama@IMT2020029
Problem_2: Expansion of sinx*/

#include<stdio.h>

//numerator function(power of x)
double num(double x,int n)
{
    double y;
    y=x;
    for(int i=1;i<n;i++)    //loop initiated for calculating x^n for input n 
    {
        x=x*y;
    }
    return x;
}

//denomenator function(factorial function)
int den(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)    //loop initiated for calculating n! for input n
    {
        x=x*i;              
    }
    return x;
}

//sine(x) function
void sine(double x)
{
    double y=0;
    for(int i=1;i<12;i=i+2)    //loop initiated for calculating expansion of Sin(x)
        {
            if (i%4==1)
            {
                y=y+(num(x,i)/den(i));
            }
            else
            {
                y=y-(num(x,i)/den(i));
            }
        }
    printf("%lf",y);
}

//main function for scanning x and calling the sine function
int main()
{
    double x;
    scanf("%lf",&x);
    sine(x);
    return 0;
}