
#include<stdio.h>
int main() {
  
  for(int i=0;i<5;i++){   
          if(i==0 | i==4){
            {
              for(int j=0;j<5;j++){
               printf("* ");
              }
            }
            printf("\n");
          }
         else {
              for(int j=0;j<5;j++){
                  if(j==0 | j==4)
                    printf("* ");
                    else
                    printf("  ");
              }
              printf("\n");
         }
  }
      return 0;
}
