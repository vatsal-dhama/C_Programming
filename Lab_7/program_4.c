//Author:Vatsal_Dhama@IMT2020029
#include<stdio.h>

//This functions give us the minimum steps required
int step_counter(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",step_counter(n));
}

int step_counter(int n)
{
/*LOGIC:
  -On observing we find that the most efficient way 
   for transferring n disks is:
    Step 1:Use the auxiliary peg B and transfer (n-1) discs to it from peg A.
    Step 2:Transfer the largest disc to peg C from peg A.
    Step 3:Tansfer the (n-1) discs to peg C from peg B.
  -Following the above 3 steps gives us 
   total steps=2times(steps for shifting (n-1)discs) +1step for shifting the largest disc
  -For transfering (n-1) discs in Step 1 and step 3 we need to use the 
   whole 3 step process with n-1 disks and so on.
  -Therefore, a recursive function is formed. 
*/
    if (n!=1)   //we know that steps for transfering a single disc is 1  
    {           //so we will end the recursion once n is 1 and straightway return 1.
    return(2*step_counter(n-1) +1);
    }
    else  
    {
        return 1;
    }
}