#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integer values : ");
    scanf("%d %d",&a,&b);
    printf("Before swapping the values are a = %d, b = %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping the values are a =%d, b = %d\n",a,b);
    //RA2211042010053
    return 0;
}
