#include <stdio.h>
int main() {
    int x, y, max, min;
    x = 99;
    y = 199;
    max = x ^ ((x ^ y) -(x > y));
    min = y ^ ((x ^ y) -(x > y));
    printf("Maximum of given numbers = %d\nMinimum of given numbers =%d\n",max,min);
    //RA2211042010053
    return 0;
}
