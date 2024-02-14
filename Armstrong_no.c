#include <stdio.h>
#include <math.h>
int main()
{
 int n,temp;
 printf("enter the number :");
 scanf("%d",&n);
int sum=0,len=0;
int n1=n;
int n2=n;
while(n1>0){
   n1/=10;
    len++;
}
while(n !=0){
    temp= pow((n%10),len);
    sum+=temp;
    n/=10;
}


   printf("%d ",sum);
   if(sum==n2)
   printf("armstrong num");
   else
   printf("not an armstrong num");
  

    return 0;

}
