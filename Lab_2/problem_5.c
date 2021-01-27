/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem 5: Write a program to input Cartesian co-ordinates (x, y) of a
point and convert them into polar co-ordinates (r, θ). (θ in radians.)*/
#include <stdio.h>
#include <math.h>
    int main()
    {
        double x,y,r,theta; //x and y are the input in cartesian coordinates (x,y)
                            //r and theta are the output in polar coordinates (r,theta)
        scanf("%lf %lf",&x,&y);
        r=pow((pow(x,2)+pow(y,2)),0.5); //r=(x^2 + Y^2)^(1/2)
        theta=atan(y/x);                //theta=tan inverse (y/x)
        printf ("%.2lf %.2lf",r,theta);
        return 0;
    }