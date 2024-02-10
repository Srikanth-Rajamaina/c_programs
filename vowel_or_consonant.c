#include <stdio.h>

int main()
{
  char c;
  printf("enter a character :");
  scanf("%c",&c);
  if(c==97 | c==101 | c==105 | c==111 | c==117 | c==65 | c==69 | c==73 | c==79 | c==85)
  //a=97,e=101,i=105,o=111,u=117,A=65,E=69,I=73,O=79,U=85
  printf("'%c' is a vowel sound ",c);
  else
  printf("'%c' is a consonant sound ",c);
  return 0;
}
