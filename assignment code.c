#include <stdio.h>
int main() {
    int a = 2, b = 3, c = 4;
	  a = 7 + (b = 8 + (c = 2)) - 4;
	  printf("%d %d %d\n", a, b, c);
    //RA2211042010053
    return 0;
}
