#include <stdio.h>

int main() {
     int n1,n2;
     printf("RA2211042010053");
     printf("Enter value of n1: ");
     scanf("%d",&n1);
     printf("Enter value of n2: ");
     scanf("%d",&n2);   
     if(n1>n2)
         printf("n1 is larger");
     else if(n2>n1)
         printf("n2 is larger");
     else
         printf("Both numbers are equal");
     return 0;
}
