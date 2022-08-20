#include<stdio.h>
const double PI=3.14;  //YOU CAN ALSO USE "#define PI 3.14"
                       //but this may generate multiple errors.
int main()
{
    int r;
    printf("enter value of r:");
    scanf("%d",&r);
    printf("area is %.2f",PI*r*r);//.2 here is used to get area with 
                                 //2 decimal place
    return 0;
}
