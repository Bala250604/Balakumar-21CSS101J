#include <stdio.h>
int main() {
    int i = 2,x,y;
    x = 2 * ++i;
    y = 2 * i++;
    printf("%d %d\n",x,y);
    //RA2211042010053
    return 0;
}
