/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem 3: Write a program that inputs coefficients a, b, c (use double
variables) and outputs the roots of the quadratic equation of the form ax 2 +
bx + c = 0. If a is 0, output "Invalid input", otherwise, in every other case,
print both the roots, even if they are equal or imaginary.
Note: If the roots are equal, print the same on two separate lines. If the roots
are real, they must be printed in increasing order on separate lines. Outputs
should be up to 2 decimal places. For imaginary roots of the form (α ± iβ),
print α, β followed by α, −β on the next line.*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,x1,x2; 
    scanf("%lf %lf %lf",&a,&b,&c);//a,b and c are the input variable in the quadratic equation (ax^2+bx+c)
    d=(pow(b,2)-4*a*c); //d is the value of determinant
    x1=(-b+pow(d,0.5))/2/a;   //x1 is the first root
    x2=(-b-pow(d,0.5))/2/a;   //x2 is the second root
    //Case 1: If a=0 , Quadratic equation is not defined!
    if (a==0)
    {
        printf("Invalid input");
        return 0;
    }
    //Case 2: If a not 0 , and d=0 , then both roots are real and same
        if (d==0)
        {
            printf ("%.2f\n%.2f",x1,x2);
            return 0;
        }
    //Case 3: If a not 0 , and d>0 , then both roots are real and distinct
        if (d>0)
        {
            printf ("%.2f\n%.2f",x2,x1);
            return 0;
        }
    //Case 4: If a not 0 , and  d<0 , then both roots are imaginary and complimentary
         if (d<0)
        {
            printf ("%.2f,%.2f\n%.2f,%.2f",-b/2,pow(4*a*c-pow(b,2),0.5)/2,-b/2,-pow(4*a*c-pow(b,2),0.5)/2);
            return 0;
        }
    
}