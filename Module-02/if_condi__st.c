#include<stdio.h>

int main()
{
   int age ;
   printf(" Enter your age:\n ");
   scanf("%d", & age);
   /*
   if(age < 13)
   {
      printf("Your are a child \n");
   }
   */
   if(age < 18)
   {
      printf("Your are not adult yet \n");
   }
   // always we have to remember when we will use if , if only give us one conditional result
   printf(" Thank You!!\n");
   return 0;
}