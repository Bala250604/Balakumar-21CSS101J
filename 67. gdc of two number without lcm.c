#include<stdio.h>
int main()
{
    int no1,no2,temp_variable,gcd;
    scanf("%d%d",&no1,&no2);
    while(no2!=0)
    {
        temp_variable=no2;
        no2=no1%no2;
        no1=temp_variable;
    }
    gcd=no1;
    printf("gcd of two numbers is %d",gcd);
}
