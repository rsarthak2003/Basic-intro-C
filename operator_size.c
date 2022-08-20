#include<stdio.h>
int main()
{   //u can use %zu or %d to print size of variable...both
   //are correct...but %zu is preffersd.
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(char));
    printf("%d\n",sizeof(long long));
    int x=10;
    double d=11.5;//we can also literal as well along with variable such as
    //ll,f etc
    printf("%zu\n",sizeof(x));
    printf("%zu\n",sizeof(d));
    printf("%d\n",sizeof(15LL));
    printf("%d\n",sizeof(13.6f));
    printf("%d\n",sizeof(x+10));
    return 0;
}




    