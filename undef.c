#include <stdio.h>
#ifdef ABC
	#undef ABC
	#define ABC 50
#else
	#define ABC 100
#endif
int main() {
    #undef ABC
	printf("%d",ABC);
    //RA2211042010053
    return 0;
}
