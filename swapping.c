#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter two integer values : ");
    scanf("%d %d", &a,&b);
    printf("Before swapping the values in a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the values in a = %d, b = %d\n",a,b);
    //RA2211042010053
    return 0;
}
