//Colin Hosking, Victor Lin
//Work 05
//Systems pd05
//2018-09-17

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strFunc.h"

int main(){
    
    printf("\nTesting str_len()\n");
    char good[] = "good";
    char bye[10] = "bye";
    char empty[] = "";
    printf("~Library implementation~ length of good: %lu\n",strlen(good));
    printf("~Library implementation~ length of bye: %lu\n",strlen(bye));
    printf("~Library implementation~ length of bye: %lu\n",strlen(empty));
    printf("~Our implementation~ length of good: %d\n",str_len(good));
    printf("~Our implementation~ length of bye: %d\n",str_len(bye));
    printf("~Our implementation~ length of empty: %d\n",str_len(empty));
    
    printf("\nTesting str_cpy()\n");
    char fish1[] = "fish";
    char fish2[] = "fish";
    char cow1[] = "cow";
    char cow2[] = "cow";
    
    printf("~Library implementation~ copy cow to fish: [%s]\n",strcpy(fish1,cow1));
    printf("~Library implementation~ copy empty to cow: [%s]\n",strcpy(cow1,empty));
    printf("~Our implementation~ copy cow to fish: [%s]\n",str_cpy(fish2,cow2));
    printf("~Our implementation~ copy empty to cow: [%s]\n",str_cpy(cow2,empty));

    printf("\nTesting strn_cat()\n");

    char pink[] = "pink"; char eye[] = "eyeeye";
    printf("~Library implementation~ concatenate pink onto eyeeye, append 3 chars: %s\n",strncat(pink,eye,3));
    char pink2[] = "pink"; char eye2[] = "eyeeye";
    printf("~Our implementation~ concatenate pink onto eyeeye, append 3 chars: %s\n",strn_cat(pink2,eye2,3));
    char green[] = "green"; char can[] = "cantaloupe";
    printf("~Library implementation~ concatenate green onto cantaloupe, append 3 chars: %s\n",strncat(green,can,3));
    char green2[] = "green"; char can2[] = "cantaloupe";
    printf("~Our implementation~ concatenate green onto cantaloupe, append 3 chars: %s\n",strn_cat(green2,can2,3));

    printf("\nTesting str_cmp()\n");
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
    
    printf("\nTesting str_chr()\n");
    char knife[] = "knife";
    
    printf("~Library implementation~ f in knife: %c\n",*strchr(knife,'f'));
    printf("~Library implementation~ z in knife: %s\n",strchr(knife,'z'));
    printf("~Our implementation~ f in knife: %c\n",*str_chr(knife,'f'));
    printf("~Our implementation~ z in knife: %s\n",str_chr(knife,'z'));

    return 0;
}
