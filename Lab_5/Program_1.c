/*Author:Vatsal_Dhama @IMT2020029*/
/*Problem_1: Pythagorean triplets*/
#include<stdio.h>
#include<math.h>
int main()
{
//variables used are defined
    int n,a,b,c,count;

//input taken
    scanf("%d",&n);
    
//invalid input case checked
    if (n<=0)
    {
        printf("Invalid input");
    }
    else
    {
    count=0;
    
//loop initiated to find the pythagorean triplets  
/*loop logic is to generate every possible combination of sides a,b and c 
  using 3 loops where a,b and c <=n. After that desired conditions are
  applied to get required output! */     
    for(c=1;c<=n;c++)
    {
        for(a=c;a>=1;a--)
        {
            for(b=1;b<=c;b++)
            {
                if(((a*a)+(b*b)==(c*c)) && (a<b) && (b<c))
                {
                    printf("%d %d %d\n",a,b,c);
                    count++; 
                }
                
            }
        }
    }
    
//No triplet condition checked
    if (count==0)
    {
        printf("No triplet");
    }
    }
    return 0;
}