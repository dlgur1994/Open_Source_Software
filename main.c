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
            printf("binary> %s\n", binarized(atoi(input)));
	    if(isPrime(atoi(input)) == 0){
	    	printf("isPrime> False\n");
	    }else{
		    printf("isPrime> True\n");
	    }
        }
    }
    printf("(bye)\n");
    free(binarized(atoi(input)));
    return 0;
}  

