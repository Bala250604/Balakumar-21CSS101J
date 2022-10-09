#include <stdio.h>
int main()
{
    int n1, n2, result;
    
    /* Show message to enter two numbers
	and get input of two numbers from user
	*/
    
	printf("Enter two numbers to find GCD:\n");
    scanf("%d%d", &n1, &n2);
    
   	   
	result = gcd(n1, n2);
    
    printf("GCD of %d and %d = %d", n1, n2, result);
    
    return 0;
}
int gcd(int a, int b)
{
    
	if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}
