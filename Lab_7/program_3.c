//Author:Vatsal_Dhama@IMT2020029
#include<stdio.h>

//Recursive function for finding the gcd of two numbers inputed
void gcd(int a, int b);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
}

void gcd(int a, int b)
{
/*-Euclid's algorithm will reduce the gcd expression unless 
   one of the numbers becomes 0
  -Therefore, until this happens recursion will not stop*/
    if (a!=0)
    {
        int i = b%a;
        gcd(i,a);
    }
/*-Once recursion stops we will print the the non zero number as our gcd*/    
    else 
    {
        printf("%d",b);
    }
}