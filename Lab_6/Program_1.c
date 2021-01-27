/*Author:Vatsal_Dhama@IMT2020029
Problem_1: Prime Factorisation*/

#include<stdio.h>

//finding and printing the primefactors of a number
void primefact(int n)
{
    int x;
    for (n=n;n>1;n=n/x)        //loop which modifies n after printing a factor
    {
        for (x=2;n%x!=0;x++)   //loop that checks which prime number divides n
        {}
        printf("%d\n",x);
    }
}

//main function defined, scanning the input and calling the primefact function
int main()
{
    int n;
    scanf("%d",&n);
    primefact(n);
    return 0;
}