#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("RA2211042010053");
    printf("Enter a Number: ");
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("Sum of Digits of Number:  %d",sum);
    return 0;
}
