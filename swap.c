#include<stdio.h>
int main()
{
    int a=5,b=6;
    scanf("%d\n",&a);
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d ",a);
    printf("%d",b);
    return 0;
}