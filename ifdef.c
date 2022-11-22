#include <stdio.h>
int main() {
    #ifdef NOTE
		int a;
		a = 10;
	#else
		int a;
		a = 20;
	#endif
	printf("%d\n", a);
    //RA2211042010053
    return 0;
}
