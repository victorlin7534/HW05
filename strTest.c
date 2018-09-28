#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_len(char *x){
  int count = 0;
  while(*x++){
    count++;
  }
  return count;
}

char * str_cpy(char *dest, char *source){
  char * temp = dest;
  char * temp2 = source;
  while(*temp2){
    * temp = * temp2;
    temp++;temp2++;
  }
  * temp = *temp2;
  return dest;
}

int main(){
char x[] = "good";
char c[4] = "bye";
printf("length of good: %d\n",str_len(x));
printf("length of bye: %d\n",str_len(c));
printf("copy bye to good: %s\n",str_cpy(x,c));
return 0;
}
