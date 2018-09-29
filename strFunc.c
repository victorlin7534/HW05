#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strFunc.h"

int str_len(char *x){
  int count = 0;
  while(*x++)
    count++;
  return count;
}

char* str_cpy(char *dest, char *source){
    char *dest2 = dest;
    char *source2 = source;  //creates pointers in order to traverse the array
    while(*source2){        //copies char in source into dest, then window moves to next char in source
        *dest2 = *source2;
        dest2++;
        source2++;
    }
    *dest2 = *source2;    //copies terminating null
    return dest;
}

char* strn_cat(char *dest, char *source, int n){
    char *temp = dest + str_len(dest); // start at the end of dest string
    while(n){
        *temp = *source;
        n--;
        temp++;
        source++;
    }
    *temp = '\0'; //add terminating null in case source has more than n chars
    return dest;
}

int str_cmp( char *s1, char *s2 ){
    char *pointy = s1;  //creates pointers in order to traverse the array
    char *sharp = s2;
    if (*pointy == 0 && *sharp == 0)  //Base case: if both strings have terminating nulls in the same place, then they are the same
        return 0;
    if (*pointy > *sharp)
        return 1;
    if (*pointy < *sharp)
        return -1;
    return str_cmp(s1+1,s2+1);  //Recursive case: now we know s1 and s2 point to the same value, so we must examine the next pair of chars
}


char* str_chr( char *s, char c ){
    char *pointy = s;
    while (*pointy){ //keeps searching until pointy encounters a null or the target
        if(*pointy==c)
            return pointy;
        pointy++;
    }
    return "(null)";
}

