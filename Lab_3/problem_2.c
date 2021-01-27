/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_2: Converting RGB to CMYK*/
#include<stdio.h>
#include<math.h>
int main()
{
    double r,g,b,c,m,y,k,w;
    scanf("%lf %lf %lf",&r,&g,&b);               //Input taken in R,G,B format
    if (r==0&&b==0&&g==0)                        //Case when all R,B and G are 0
    {
         printf("0.00 0.00 0.00 1.00");
    }
    else
    {
    w=fmaxl(fmaxl(r/255,g/255),b/255);           //Calculating the value of white
    k = 1-w;                                     //Calculating the value of black
    c=(w-r/255)/w;                               //Calculating the value of cyan
    m=(w-g/255)/w;                               //Calculating the value of magenta
    y=(w-b/255)/w;                               //Calculating the value of yellow
    
    printf("%.2f %.2f %.2f %.2f",c,m,y,k);       //Printing value of c,m,y and k
        return 0;
    }
    

}