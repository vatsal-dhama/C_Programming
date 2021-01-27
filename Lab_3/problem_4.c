/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_4:Identifying type of triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;                              //coordinates of points are (x1,y1),(x2,y2) and (x3,y3)
    float a,b,c;                                        //a,b and c are the sides of triangle
    scanf("%i %i %i %i %i %i",&x1,&y1,&x2,&y2,&x3,&y3); //input of coordinates(x1,y1),(x2,y2) and (x3,y3) taken 
    a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    if (a+b<=c||b+c<=a||a+c<=b)                         //condition for not forming triangle
    {
        printf("Not triangle");
    }
    else if (a==b&&b==c)                                //condition for equilateral triangle
    {
        printf("Equilateral");
    }
    else if (a==b||b==c||a==c)                          //condition for isosceles triangle
    {
        printf("Isosceles");
    }
    else printf("scalene");                             //If none of above condition satisfies, then it is a scalene triangle
    return 0;
}


