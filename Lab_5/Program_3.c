/*Author:Vatsal_Dhama @IMT2020029*/
/*Problem_3: Grace Marks*/
#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    int n;

//Input taken   
    scanf("%c%d",&c,&n);
    
//Invalid input case checked    
    if (n<0)
    {
        printf("Invalid input");
        return 0;
    }
    
//Switch function used to check the conditions 
    switch(c)
    {
        case 'f':
        {
            if (n>3)
            {
                printf("0");
            }
            else
            {
                printf("%d",(n)*5);
            }
            break;
        }
        case 's':
        {
            if (n>2)
            {
                printf("0");
            }
            else
            {
                printf("%d",n*4);
            }
            break;
        }
        case 't':
        {
            if (n>1)
            {
                printf("0");
            }
            else
            {
                printf("%d",5*n);
            }
            break;
        }
        default :
        {
            printf("0");
        }
    }
}