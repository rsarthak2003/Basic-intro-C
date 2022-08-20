#include<stdio.h>
int x=10; //GLOBAL VARIABLE
int main()
{
    printf("%d\n",x);
    {
    int x=5;//LOCAL VARIABLE
    printf("%d",x);
    return 0;
    }
}

