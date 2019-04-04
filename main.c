#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "21400611.h"
#include "21800622.h"

int main(void) {
  char input[2048] = {0};
  int is_digit;
    
  while(fgets(input, sizeof(input), stdin) != NULL) {
    if(input[strlen(input)-1] == '\n')
      input[strlen(input)-1] = 0;
    if(strcmp(input,"quit")==0)
      break;

    is_digit = 1;
    for(int i=0 ; i<sizeof(input) ; i++) {
      if(isalpha(input[i])) {
        printf("Your input is not a number\n");
        is_digit = 0;
        break;
      }
    }

    if(is_digit) {
      printf("reverse> %d\n", reverse_digits(atoi(input)));
      printf("sort> %d\n", sort_digits(atoi(input)));
    }
  }  
    printf("bye\n");
    return 0;
}  
