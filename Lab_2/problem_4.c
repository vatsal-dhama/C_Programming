/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem 4: Write a program that inputs an integer between 0 and 99999 and calculate
the sum of its digits. Output must be in integer format*/
#include<stdio.h>
#include<math.h>
int main ()
{
    int a,sum,d1,d2,d3,d4,d5 ; //a is the input number from 0 to 99999
    scanf("%i",&a);
    d1=a%10; //d1 is the one's digit
    a=a/10;  
    d2=a%10; //d2 is the ten's digit
    a=a/10;  
    d3=a%10; //d3 is the hundred's digit
    a=a/10;
    d4=a%10; //d4 is the thousand's digit
    a=a/10;
    d5=a%10; //d5 is the ten-thousand's digit
    sum=d1+d2+d3+d4+d5; //sum is the sum of all the digits
    printf ("%i",sum);
    return 0;
}