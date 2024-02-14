#include <stdio.h>

int main()
{
  int n;
  printf("enter the year");
  scanf("%d",&n);
 
  if((n%4==0) && (n%400==0) || (n%100 !=0))
   printf("the yr is leap");
   else
   printf("not leap yr");

    return 0;
}
