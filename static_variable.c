#include<stdio.h>
int main()
{
    static int x;//uninitiallized static variable
    printf("%d",x);
    return 0;
}