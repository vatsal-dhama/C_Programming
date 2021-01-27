//Author:Vatsal_Dhama@IMT2020029
#include<stdio.h>

//This function will return 1 if Rinku wins and 2 if Ravi wins
int winner(int n,int id); 
int main()
{
    int n,id;
    scanf("%d %d",&n,&id);
    if (winner(n,id)==1)
    {
        printf("Rinku");
    }
    else
    {
        printf("Ravi");
    }    
}

int winner(int n,int id)
{
/* LOGIC=there are 2 players in this game P1 and P2 (P1 plays first) and N coins initially
-If N is 3 then P1 guaranteed loses as no matter what he picks P2 wins
-Similarly if number of coins just before P2 picks is 3 then P1 wins 
-If N is a power of 2 then P1 directly wins in the first move
-So, we observe a pattern that for P1 to win N should be of the form (3.x + (2)^y) where
 x and y are integers and x,y>=0. This expression translates that N can be
 any natural number except multiple of 3.
-Therefore, the only cases when P2 wins is when N is a multiple of 3. 
   */    
    if (n%3==0)
    {
        return (3-id);  //(3-id)gives us 2 if id is 1 and gives us 1 if id is 2 
    }
    else
    {
        return (id);
    }    
}