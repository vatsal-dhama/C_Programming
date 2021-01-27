//Author:Vatsal_Dhama@IMT2020029
#include<stdio.h>

//This function returns 1 if the number inputed is a palindrome and 0 if not
int is_palindrome(int x,int y,int i);

//This function calculates the total digits in the input number
int number_of_digits(int x);

//This function finds the digit on the nth place from right of the input number
int nth_digit(int n,int x);

int main()
{
    int x;
    int i=1;
    scanf("%d",&x);
    int y=number_of_digits(x);  //y is the number of digits in x
    if (is_palindrome(x,y,i)==0)
    {
        printf("No");   //printing "No" if failure is reported by the is_palindrome function
    }
    else
    {
        printf("Yes");  //printing "Yes" if success is reported by the is_palindrome function      
    }    
}

int number_of_digits(int x)
{
    int i=0;
    while(x>0)  //i used as a counter in loop to count the total digits
    {
        x=x/10;
        i++;
    }
    return i;
}
int nth_digit(int n,int x)
{
    int count=0;
    while(count<n-1)    //This loop removes first (n-1) from x and modifies it
    {
        x=x/10;
        count++;        
    }
    x=x%10; //It finds the unit digit of the modified x          
    return x;
}
int is_palindrome(int x,int y,int i)
{ 
//LOGIC:    
/*      -We have used recursion in the function is_palindrome.
        -The recursive function will run until it compares all the digits at
         ith place from right and left(starting from i=0).
        -The recursion will stop when we the digits are found not equal
         and return 0 for failure.
        -The recursion will stop for a even sized palindrome when i=(y/2 +1)
         as it indicates that all digits have been compared successfully and
         will return 1 for success.
        -The recursion will stop for a odd sized palindrome when i=((y-1)/2 +1)
         as it indicates that all digits have been compared successfully and
         will return 1 for success.
*/
    if (i==((y-1)/2)+1)
    {
        return 1;
    }
    else if (i==(y/2)+1)
    {
        return 1;
    }
    else if (nth_digit(i,x)==nth_digit(y+1-i,x))
    {
        i++;
        is_palindrome(x,y,i);
    } 
    else 
    {
        return 0;
    }
}

