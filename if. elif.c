#include <stdio.h>
int main() {
    #if(!5 >= 5)
		int a = 5;
	#elif -1
		int a = 10;
	#else
		int a = 15;
	#endif
	printf("%d", a);
    //RA2211042010053
    return 0;
}
