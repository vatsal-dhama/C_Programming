/*Author = Vatsal_Dhama_IMT2020029*/
//Problem 1: Write a program that inputs two integers (x and y) and outputs f (x, y) up to two decimal places as defined
#include <stdio.h>
#include <math.h>
    int main()
    {   int x,y; //input integers taken as x and y
        double z; //output taken as z
        scanf ("%i %i",&x,&y);
        if (x>=y){
        z=log(y); //given , f(x,y)=z=ln(y)
        printf ("%.2f",z);}
        else{
        z=exp(x); //given ,  f(x,y)=z=e^(x)
        printf ("%.2f",z);}
        return 0;

        }
   
