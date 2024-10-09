#include<stdio.h>

int main()
{
   int amount ;
   printf("Enter your amount :\n ");
   scanf("%d", & amount);
   if(amount >= 80 && amount <=100)
   {
      printf("You can parches 2L COCA-COLA \n");
   }
   else if(amount >= 50 && amount <80)
   {
      printf("You can parches 1.5L MOJO \n");
   }
   else if(amount >= 20 && amount <50 )
   {
      printf("You can parches 1L 7UP \n");
   }
   else if(amount >= 10 && amount <20 )
   {
      printf("You can parches 0.5L SOFT DRINKING WATER \n");
   }
   else{
      printf("You can parches A CHOCOLATE \n");
   }
   // printf(" Thank You for participate for the examination!!\n");
   return 0;
}