/*Author = Vatsal_Dhama_IMT2020029*/
/*Problem_3:To find grade of steel*/
#include<stdio.h>
#include<math.h>
int main()
{
    int hdns,ts,a,b,c;                        //value of hardness defined as "hdns" , value of tensile strength defined as "ts"
    float cc;                           //value of carbon content defined as "cc"
    scanf("%i %f %i",&hdns,&cc,&ts);    //input values taken
    
    (hdns>50)?(a=1):(a=0);              //a is condition 1
    (cc<0.7)?(b=1):(b=0);               //b is condition 2
    (ts>5600)?(c=1):(c=0);              //c is condition 3
    
    if (a==1&&b==1&&c==1)       //condition for grade 10 steel
    {
        printf("10");
    }
    else if (a==1&&b==1) //condition for grade 9 steel
    {
        printf("9");
    }
    else if (b==1&&c==1) //condition for grade 8 steel
    {
        printf("8");
    }
    else if (a==1&&c==1) //condition for grade 7 steel
    {
        printf("7");
    }
    else if (a==1||b==1||c==1)
    {                                   //condition for grade 6 steel
        printf("6");
    }
    else printf("5") ;                  //if none of the above conditions satify then it is grade 5 steel
    return 0;
}