#include<stdio.h>
int x=10;
int main()
{
  int x=20; //PRIORITY HERE IS GIVEN TO LOCAL VARIABLE WHICH IS
            //INSIDE FUNCTION.
  printf("%d",x);
  return 0;
} 