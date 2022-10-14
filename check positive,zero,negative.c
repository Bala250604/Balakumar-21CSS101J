#include <stdio.h>

int main() {
      int number;
      printf("RA2211042010053");
      printf("Enter a number to check for positive,negative,zero:");
      scanf("%d",&number);
      if(number>0)
         printf("%d is Positive",number);
      if(number<0)
         printf("%d is Negative",number);
      if(number==0)
         printf("Number is Zero");
         return 0;
}
