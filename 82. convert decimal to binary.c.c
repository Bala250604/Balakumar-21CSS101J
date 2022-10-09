#include<stdio.h>
void binary(int val);
int main()
{
    int a,b;
    printf("Enter the number in decimal:");
    scanf("%d",&a);
    printf("Number in Binary form: ");
    binary(a);
    return 0;
}
void binary(int val)
{
    int r;
    r=val%2;
    val=val/2;
    if(val==0)
    {
        printf("%d",r);
    }
    else
    {
        binary(val);
        printf("%d",r);
    }
}
