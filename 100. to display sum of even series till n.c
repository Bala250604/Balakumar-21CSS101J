#include 
//#include 

void main() {


//clrscr();

int i,n;
int sum_of_series = 0;
 
   printf("RA2211042010053");
   printf("\n C Program to print sum of series 2 + 4 + 6 + 8 + .... + n : \n\n ");
 
   printf("Enter an even number n : ");
   scanf("%d",&n);
   
   for ( i = 1 ; i <= n ; i++ )
   {

        i = i+1;
      if(n!=i)
        printf(" %d +",i);
      else
        printf(" %d ",i);
      sum_of_series = sum_of_series + i;
      
     
   }
   
   printf(" = %d",sum_of_series);
   

 //    getch(); 

}
