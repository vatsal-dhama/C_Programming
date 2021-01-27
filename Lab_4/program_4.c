/*Author:Vatsal_Dhama #IMT2020029*/
/*Problem_4:To find the count of coprime numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x;                             //x is the input number 
    scanf("%d",&x);
    if (x<=0)
    {
        printf("Invalid input");       //invalid input case checked
    }
    else if (x==1)
    {
        printf("1");                   //special case when input is 1
    }
    else
    {
        int count=0;                   //count of coprime numbers with x
        int n=1;                       //current number with whom we are checking coprimity of x
        int z=1;                       
        int hcf;                       
        while (n<x)                    //loop for finding hcf
        {
           z=1;hcf=0;
           while(z<=n)
           {
              if ((n%z==0)&&(x%z==0))
              {
                  hcf=z;
                  z++;
              }
              else
              {
                  z++;
              } 
           }
           if (hcf==1)
           {
               count++;
               n++;
           }
           else
           {
               n++;
           }
        }
        printf("%d",count);
    }
    
}