/*Author:Vatsal_Dhama #IMT2020029*/
/*Problem_1:To find the maximum and minimum of the given integers*/
#include<stdio.h>
#include<math.h>
int main()
{
    int r,max,min,first;                    //r is the required range
    int l;                                  //l is the size of the list of integers                  
    scanf ("%d",&l);                        //input for size of list taken
    if (l<=0)                               //verifying the invalid condition
    {
        printf("Invalid input");             
        return 0;
    }
    else
    {
        scanf("%d",&first);                 //'first' is the first input number from our list
        max=first;                          //max variable is for determining maximum number of the list
        min=first;                          //min variable is for determining minimum number of the list
        int count;
        count=1;
        while (count<l)                     //while loop initiated for finding out the max and min integer of the list.
        {   
            int x;
            scanf ("%d",&x);
            if (x<min)
            {
               min=x;
            }
            else if(x>max) 
            {
               max=x;
            }
            count++;
        }
        r=(max-min);                       //range of a list is Max - Min elements of that list
        printf("%d",r);   
    }
    return 0;
}