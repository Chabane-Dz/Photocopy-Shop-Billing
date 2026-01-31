#include <stdio.h>

int main(){
    int n , total ;
   printf("___Photocopy Shop Billing___\n");
   printf("Enter number of copies : ");
   scanf("%d",&n);

   if(n<=10){
    total = 2 * n ;
   }
   else if(n<=30){
    total = (n-10)* 1.5 + 20 ;    
   }
   else {
    total = (n-30)* 1 + 30 + 20 ;
   }
printf("Total = %d",total);

return 0 ;
}