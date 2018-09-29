//Colin Hosking, Victor Lin
//Work 05
//Systems pd05
//2018-09-17


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long str_len(char *x){
  int count = 0;
  while(*x++){
    count++;
  }
  return count;
}

char *str_cpy(char *dest, char *source){
    char *dest2 = dest;
    char *source2 = source;
    
    while(*source2){
        *dest2 = *source2;
        dest2++;
        source2++;
    }
    *dest2 = *source2;
    return dest;
}

int main(){
    
    printf("Testing strlen()\n");
    char good[] = "good";
    char bye[10] = "bye";
    char empty[] = "";
    printf("~Library implementation~ length of good: %lu\n",strlen(good));
    printf("~Library implementation~ length of bye: %lu\n",strlen(bye));
    printf("~Library implementation~ length of bye: %lu\n",strlen(empty));
    printf("~Our implementation~ length of good: %lu\n",str_len(good));
    printf("~Our implementation~ length of bye: %lu\n",str_len(bye));
    printf("~Our implementation~ length of empty: %lu\n",str_len(empty));
    
    printf("Testing strcpy()\n");
    char fish1[] = "fish";
    char fish2[] = "fish";
    char cow1[] = "cow";
    char cow2[] = "cow";
    
    printf("~Library implementation~ copy cow to fish: [%s]\n",strcpy(fish1,cow1));
    printf("~Library implementation~ copy empty to cow: [%s]\n",strcpy(cow1,empty));
    printf("~Our implementation~ copy cow to fish: [%s]\n",str_cpy(fish2,cow2));
    printf("~Our implementation~ copy empty to cow: [%s]\n",str_cpy(cow2,empty));

    
    return 0;
}
