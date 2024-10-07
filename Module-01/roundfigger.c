#include<stdio.h>
int main(){
   int a;
   scanf("%d", &a);
   printf("print Float number: %010d", a); // if i want to put 8 digit then i have to add that number into %d ex: %04d
   return 0;
}

// this is for Float number:

/*

#include<stdio.h>
int main(){
   double a;
   scanf("%lf", &a);
   printf("print Float number: %.5lf", a);
   return 0;
}

*/