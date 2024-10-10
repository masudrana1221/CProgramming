#include<stdio.h>

int main()
{
   int days ;
   printf("Enter your number :\n ");
   scanf("%d", &days);
   switch(days)
   {
      case 01:
         printf("Saturday \n");
         break;
      case 02:
         printf("Sunday \n");
         break;
      case 03:
         printf("Monday \n");
         break;
      case 04:
         printf("Tuesday \n");
         break;
      case 05:
         printf("Wednesday \n");
         break;
      case 06:
         printf("Thursday \n");
         break;
      case 07:
         printf("Friday \n");
         break;
      default:
         printf(" This is not a day \n");
         printf(" You are Wrong !! \n");

   }

   return 0;
}