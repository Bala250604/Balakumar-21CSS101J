#include <stdio.h>
#define NUM 10
int main() {
    #if(NUM == 0)
		printf("Number is Zero");
	#elif(NUM > 0)
		printf("Number is Positive");
	#else
		printf("Number is Negative");
	#endif
    //RA2211042010053
    return 0;
}
