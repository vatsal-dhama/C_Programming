/*Author:Vatsal_Dhama@IMT2020029
Problem_3: triangle_problem*/

#include<stdio.h>
#include<math.h>

//calculate distance between 2 points
double DistanceBetweenPoints(double a1,double b1,double a2,double b2)
{
    double distance;
    distance=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
    return distance;
}

//calculate area of triangle
double AreaOfTriangle(double a,double b,double c)
{
    double area;
    area=sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c)/16);
    return area;
}

//find whether point lies Inside or Outside the triangle
void InsideOutside(double x1,double y1,double x2,double y2,double x3,double y3,double z1,double z2,double a,double b,double c)
{
        double area,d,e,f,A1,A2,A3;
        d=DistanceBetweenPoints(x1,y1,z1,z2);
        e=DistanceBetweenPoints(x2,y2,z1,z2);
        f=DistanceBetweenPoints(x3,y3,z1,z2);
        area=AreaOfTriangle(a,b,c);
        A1=AreaOfTriangle(a,d,e);
        A2=AreaOfTriangle(b,e,f);
        A3=AreaOfTriangle(c,d,f);
        if (A1+A2+A3==area)        //condition for inside and outside checked
        {
            printf("INSIDE\n");
        }
        else
        {
            printf("OUTSIDE\n");
        }
}

//main function defined
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,area;
    int n;
    
    //input taken
    scanf("%lf %lf %lf %lf %lf %lf %d",&x1,&y1,&x2,&y2,&x3,&y3,&n);
    
    //sides of triangle calculated
    a=DistanceBetweenPoints(x1,y1,x2,y2);
    b=DistanceBetweenPoints(x2,y2,x3,y3);
    c=DistanceBetweenPoints(x3,y3,x1,y1);
    
    //area of triangle calculated
    area=AreaOfTriangle(a,b,c);
    printf("%lf\n",area);
    
    //Inside Outside checked for input coordinate
    for(int i=0;i<n;i++)
    {
        double z1,z2;
        scanf("%lf %lf",&z1,&z2);
        InsideOutside(x1,y1,x2,y2,x3,y3,z1,z2,a,b,c);
    }

}
