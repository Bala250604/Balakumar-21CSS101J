#include <stdio.h>
int main() {
    char ch;
	printf("Enter a character : ");
	ch = getchar();
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		printf("Given character %c is an alphabet\n", ch);
	}
	if (ch >= '0' && ch <= '9') {
		printf("Given character %c is a digit\n", ch);
	}
    //RA2211042010053
    return 0;
}
