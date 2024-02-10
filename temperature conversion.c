#include <stdio.h>

int main()
{
   float celsius;
   printf("enter the celsius temperature : ");
   scanf("%f",&celsius);
   float fahrenheit;
   fahrenheit=(celsius*9/5)+32;     //formula
   printf("equivalent fahrenheit temperature is : %f ",fahrenheit);

    return 0;
}
