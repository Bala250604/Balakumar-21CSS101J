#include<stdio.h>
#include<conio.h>
 
void main()
{
    int a,b,c;
    clrscr();
    printf("RA2211042010053");
    printf(" Enter Three Values : ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("\n %d is a Greatest Number",a);
    if((b>c)&&(b>a))
        printf("\n %d is a Greatest Number",b);
    if((c>a)&&(c>b))
        printf("\n %d is Greatest Number",c);
    getch();
}
