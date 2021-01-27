/*Author = Vatsal_Dhama_IMT2020029*/
/*problem_2 : You are given three floats a b c as inputs which represent the length, the
breadth of a rectangle and the radius of a circle “respectively”. Write a program which
gives output as - area of the rectangle, perimeter of the rectangle, area of the circle and
circumference of the circle “respectively”. (Make sure that sequence of output is as
mentioned above). (Assume π = 3.14) (Give output upto 2 decimal places)*/; 
#include <stdio.h>
  int main ()
  {
      float a,b,c,d,e,g,h; /* a= length of rectangle
                              b= breadth of rectangle
                              c= radius of circle*/
      scanf("%f %f %f",&a,&b,&c);
      d=(a+b)*2.00;
      e=a*b;       
      g=3.14*c*c;  /*Value of Pie is taken as 3.14*/;
      h=2.00*3.14*c; 
      printf("%.2f %.2f %.2f %.2f",e,d,g,h);
      /*e= area of rectangle
        d= perimeter of rectangle
        g= area of circle
        h= circumference of circle*/

return 0;
  }
