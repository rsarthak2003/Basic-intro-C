#include<stdio.h>
int x;  //UNINITIALLIZED GLOBAL VARIABLE
int main()
{
    printf("%d",x);
    return 0;
}
//OUTPUT WILL ALWAYS BE ZERO IN THIS CASE