#include <stdio.h>
#define CUBE(Y) Y*Y*Y
int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);
    printf("cube of %d = %d\n",n,CUBE(n));
    //RA2211042010053
    return 0;
}
