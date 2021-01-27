/*Author:Vatsal_Dhama #IMT2020029*/
/*Problem_2:To reverse the digits of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,a,count;
    scanf("%d",&x);                //x is our input number
    if (x<=0)                      //Invalid case checked
    {
        printf("Invalid input");
    }
    else
    {   
        y=x;
        count=0;                   
        while (y>0)                //calculated the number of digits in x
        {
            y=y/10;
            count++;
        }                          //final value of count obtained is the total number of digits in x
        a=0;
        while (count>0)            //calculated the value of reversed integer
        {
            z=x%10;
            a=a+z*(pow(10,(count-1)));
            count=count-1;
            x=x/10;
        }
        printf("%d",a);
    }
}
