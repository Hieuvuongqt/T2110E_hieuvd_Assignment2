#include<stdio.h>
int main()
{
   int num,rem,reverse_num=0;
   printf("\nEnter a number: ");
   scanf("%d",&num);
 
   while(num>=1)
   {
      rem = num % 10;
      reverse_num = reverse_num * 10 + rem;
      num = num / 10;
   }
 
   printf("\nReverse number: %d", reverse_num);
   return 0;
}