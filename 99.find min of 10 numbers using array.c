#include 

void main() {


//clrscr();

int arr[10];
int i;
int min;
 

printf("\n Enter 10 numbers : \n\n");
 
 for(i = 0; i<10;i++) {
     
      printf("Enter no. %d   : \n",i+1);
      scanf("%d",&arr[i]);
      
    
     
 }
 
 min = arr[0];
 
 for(i = 0; i<10;i++) {
     
       if(arr[i]<=min) {
           
           min = arr[i];
       }

}
 printf("Min number : %d",min);
 
//getch();  
   
 }

