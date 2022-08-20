#include<stdio.h>
int x=10;
int main()
{
    int x=30;
    {
        int x=40;    
        printf("%d",x);
        return 0;
    }
}