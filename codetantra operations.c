#include <stdio.h>
int main() {
    int a,b,s1,s2,s3,s4,s5;
    printf("Enter any two integer values : ");
    scanf("%d %d", &a, &b);
    s1 = a + b;
    s2 = a - b;
    s3 = a * b;
    s4 = a / b;
    s5 = a % b;
    printf("Sum = %d\n", s1);
    printf("Difference = %d\n", s2);
    printf("product = %d\n", s3);
    printf("Division = %d\n", s4);
    printf("Remainder = %d\n", s5);
    //RA2211042010053
    return 0;
}
