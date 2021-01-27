/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_1:Finding intersection of circles*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,r1,x2,y2,r2,z;                           //(x1,y1) , (x2,y2) are the coordinates of the centres of circles
                                                       //and r1 and r2 are their respective radius 
    scanf("%i %i %i %i %i %i",&x1,&y1,&r1,&x2,&y2,&r2);
   z=sqrt(pow((x1-x2),2)+pow((y1-y2),2));              //z is the distance between two points
    if ((r1<0)||(r2<0))                                //Case for either circle to not exist 
    {
        printf("Invalid Input");
    }
    else if (z<(r1+r2))                                //Case for circles to intersect 
    {
        printf("Intersect");
    }
    else if (z==(r1+r2))                               //Case for circles to touch
    {
        printf("Touch");                               
    }
    else (printf("No Intersection"));                  //If all the above cases do not satisfy , then the circles don't intersect
    return 0;
}