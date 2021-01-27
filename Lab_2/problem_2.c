/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_2: Consider the polynomial f(x) = x^4 − x^3 − 24x^2 + 4x + 80. Write a program to
input a number x in floating point format and then print "Root" if the given input x is a
root of f(x). If the input x is not a root, then print the sign of f(x) ("Positive" or "Negative").*/
#include<stdio.h>
#include<math.h>
int main ()
{
    float x ;//x is the input number
    float y;
    scanf("%f",&x);
    y=pow(x,4) - pow(x,3) - 24*pow(x,2) + 4*x + 80; //f(x)=y=x^4 − x^3 − 24x^2 + 4x + 80
    if (y==0) //if y=0 , x is the root
    { printf ("root");
    }
    else{
        if (y>0) //if y>0 , f(x) is positive
        {
            printf ("positive");
        }
        else
        {
            printf ("negative"); //if y not >=0, then y <0 . This means f(x) is negative
        }
    }
return 0;
}