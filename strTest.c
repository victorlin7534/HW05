//Colin Hosking, Victor Lin
//Work 05
//Systems pd05
//2018-09-17


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


int str_cmp( char *s1, char *s2 ){
    char *pointy = s1;  //creates pointers in order to traverse the array
    char *sharp = s2;
    
    if (*pointy == 0 && *sharp == 0){  //Base case: if both strings have terminating nulls in the same place, then they are the same
        return 0;
    }
    if (*pointy > *sharp){
        return 1;
    }
    if (*pointy < *sharp){
        return -1;
    }
    
    return strcmp(s1+1,s2+1);  //Recursive case: now we know s1 and s2 point to the same value, so we must examine the next pair of chars
}


char* str_chr( char *s, char c ){
    char *pointy = s;
    while (*pointy && *pointy != c){ //keeps searching until pointy encounters a 0 or the target
        pointy++;
    }
    return pointy;
}

int main(){
    
    printf("\nTesting strlen()\n");
    char good[] = "good";
    char bye[10] = "bye";
    char empty[] = "";
    printf("~Library implementation~ length of good: %lu\n",strlen(good));
    printf("~Library implementation~ length of bye: %lu\n",strlen(bye));
    printf("~Library implementation~ length of bye: %lu\n",strlen(empty));
    printf("~Our implementation~ length of good: %d\n",str_len(good));
    printf("~Our implementation~ length of bye: %d\n",str_len(bye));
    printf("~Our implementation~ length of empty: %d\n",str_len(empty));
    
    printf("\nTesting strcpy()\n");
    char fish1[] = "fish";
    char fish2[] = "fish";
    char cow1[] = "cow";
    char cow2[] = "cow";
    
    printf("~Library implementation~ copy cow to fish: [%s]\n",strcpy(fish1,cow1));
    printf("~Library implementation~ copy empty to cow: [%s]\n",strcpy(cow1,empty));
    printf("~Our implementation~ copy cow to fish: [%s]\n",str_cpy(fish2,cow2));
    printf("~Our implementation~ copy empty to cow: [%s]\n",str_cpy(cow2,empty));

    printf("\nTesting strcmp()\n");
    char abc[] = "abc";
    char abc2[] = "abc2";
    char aba[] = "aba";
    char ddd[] = "ddd";
    
    printf("~Library implementation~ abc to ddd: %d\n",strcmp(abc,ddd));
    printf("~Library implementation~ abc to aba: %d\n",strcmp(abc,aba));
    printf("~Library implementation~ abc to abc: %d\n",strcmp(abc,abc));
    printf("~Our implementation~ abc to ddd: %d\n",str_cmp(abc,ddd));
    printf("~Our implementation~ abc to aba: %d\n",str_cmp(abc,aba));
    printf("~Our implementation~ abc to abc: %d\n",str_cmp(abc,abc));
    
    printf("\nTesting strchr\n");
    char knife[] = "knife";
    
    printf("~Library implementation~ f in knife: %c\n",*strchr(knife,'f'));
    printf("~Library implementation~ z in knife: %s\n",strchr(knife,'z'));
    printf("~Our implementation~ f in knife: %c\n",*strchr(knife,'f'));
    printf("~Our implementation~ z in knife: %s\n",strchr(knife,'z'));

    
    return 0;
}
