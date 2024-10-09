#include<stdio.h>

int main()
{
   int age ;
   printf(" If your number upto 80 marks than Enter your number :\n ");
   scanf("%d", & age);
   if(age >= 80 && age <=100)
   {
      printf("Your grade is A+ \n");
   }
   else
   {
      printf("Your are pass in the exam. \n");
   }
   printf(" Thank You for participate for the examination!!\n");
   return 0;
}