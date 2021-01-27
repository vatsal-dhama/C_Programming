/*Author:Vatsal_Dhama #IMT2020029*/
/*Problem_3:To convert a decimal number to octal number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,count;
    scanf("%d",&x);                 //input x taken
    if (x<0)
    {
        printf("Invalid input");    //invalid input condition verified
    }
    else
    {
        z=0;
    count=0;
    while (x>0)                     //loop created for converting decimal to octal
    {
        y=x%8;
        x=x/8;
        z=z+y*(pow(10,count));      //final value of z is the octal value
        count++;
    }
    printf("%d",z);
    }
}