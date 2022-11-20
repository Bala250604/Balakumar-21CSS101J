#include <stdio.h>
int main() {
    float amount,rate,simple_interest;
    int months;
    printf("provide amount and interest in the format $amount rate%% : ");
    scanf("$%f %f%%",&amount,&rate);
    printf("Enter the period in months : ");
    scanf("%d",&months);
    simple_interest = (amount*rate*months)/100;
    printf("simple interest : %f\n", simple_interest);
    //RA2211042010053
    return 0;
}
