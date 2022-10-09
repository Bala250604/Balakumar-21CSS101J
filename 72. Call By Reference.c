#include<stdio.h>
int main()
{
    int a=40,b=60,c;
    c=add(&a,&b);
    printf("The Sum is: %d",c);
    return 0;
}
add(int *x,int *y)
{
    int z;
    z=*x+*y;
    return(z);
}
