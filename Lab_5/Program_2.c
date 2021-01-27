/*Author:Vatsal_Dhama @IMT2020029*/
/*Problem_2: Armstrong number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,count,x,z,y;
    
//Input taken
    scanf("%d %d",&n1,&n2);
    int count1=0;
    
//Condition for invalid input checked
    if (n1<0 || n2<0)
    {
        printf("Invalid input");
    }
    else
    { 
    
//loop initiated for checking whether a number is Angstrom
//loop logic is to add the cubes of all digits of every number in the range
    for (count=n1;count<=n2;count++)
    {
        z=0;
        for (y=count;y>0;y=y/10)
        {
            x=y%10;
            z=z+x*x*x;
        }
        if (z==count)
        {
            printf("%d\n",z);
            count1++;
        }
    }

//Case of No Armstrong number found
     if(count1==0)
    {
        printf("No Armstrong Number");
    }
    }
    return 0;
}