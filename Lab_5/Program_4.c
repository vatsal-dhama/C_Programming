/*Author:Vatsal_Dhama @IMT2020029*/
/*Problem_4: Diamond pattern*/
#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    int n,count,x;
    
//Input taken
    scanf("%d %c",&n,&c);
    
//Invalid input case checked
    if (n<=0)
    {
        printf("Invalid input");
    }
    else
    {  
    
//Loop initiated for printing the desired shape
    for(count=1;count<=(2*n-1);count++)
    {
       
//Case when elements in rows is increasing
       if(count<=n) 
       {
           for(x=0;x<((2*count)-1);x++)
           {
                printf("%c ",c);
           }
           printf("\n");
       }
       
//Case when elements in rows is increasing
       else
       {
           for(x=(4*n-2*count-1);x>0;x--)  //((2*count-1)-(4*(count-n)))=4*n-2*count-1
           {
                printf("%c ",c);
           }
           printf("\n");
       }   
    }
    }
}