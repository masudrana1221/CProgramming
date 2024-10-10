#include<stdio.h>

int main()
{
   int days ;
   printf("Enter your number :\n ");
   scanf("%d", &days);
   if(days == 1)
   {
      printf("Saturday \n");
   }
   else if(days == 2)
   {
      printf("Sunday \n");
   }
   else if(days == 3)
   {
      printf("Monday \n");
   }
   else if(days == 4 )
   {
      printf("Tuesday \n");
   }
   else if(days == 5 )
   {
      printf("wednesday \n");
   }
   else if(days == 6 )
   {
      printf("Thursday \n");
   }
   else if(days == 7 )
   {
      printf("Friday \n");
   }
   else{
      printf(" This is not a day \n");
      printf(" You are Wrong !! \n");
   }
   
   return 0;
}